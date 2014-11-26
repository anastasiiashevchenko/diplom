<?php
/**
 * Implements hook_form().
 */
function demo_drupal_way_hierarchical_select_form($form, $form_state) {
  $machine_name = 'hierarchical_select';
  $empty_value = '_none_';
  $empty_option = array(
    1 => t('- Country -'),
    2 => t('- City -'),
    3 => t('- Address -'),
  );
  $vocabulary = taxonomy_vocabulary_machine_name_load($machine_name);
  $form['items'] = array(
    '#prefix' => '<div id="location">',
    '#suffix' => '</div>',
    '#tree' => TRUE,
  );
  $items_values = isset($form_state['values']['items']) ? $form_state['values']['items'] : array();
  $items_values += array('item_' . (count($items_values) + 1) => $empty_value);
  $parent_tid = 0;
  foreach ($items_values as $input_name => $tid) {
    if ($parent_tid === $empty_value || !($terms = taxonomy_get_tree($vocabulary->vid, $parent_tid, 1))) {
      break;
    }

    $options = array();
    foreach ($terms as $term) {
      $options[$term->tid] = $term->name;
      if ($term === end($terms)) {
        $depth = count(taxonomy_get_parents_all($term->tid));
      }
    }

    $form['items'][$input_name] = array(
      '#type' => 'select',
      '#options' => $options,
      '#default_value' => $tid,
      '#empty_option' => $empty_option[$depth],
      '#empty_value' => $empty_value,
      '#ajax' => array(
        'callback' => 'demo_drupal_way_hierarchical_select_form_ajax_callback',
        'wrapper' => 'location',
        'method' => 'replace',
        'effect' => 'fade',
      ),
    );

    $parent_tid = isset($options[$tid]) ? $tid : $empty_value;
  }

  $form['actions'] = array(
    '#type' => 'actions',
  );
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#name' => 'submit',
    '#value' => t('Submit'),
  );

  return $form;
}

/**
 * @see taxonomy_vocabulary_machine_name_load()
 * Ajax callback.
 */
function demo_drupal_way_hierarchical_select_form_ajax_callback($form, $form_state) {
  return $form['items'];
}

/**
 * Implements hook_form_submit().
 */
function demo_drupal_way_hierarchical_select_form_submit($form, $form_state) {
  if ($form_state['triggering_element']['#name'] == 'submit') {
    $term_names = array();
    foreach ($form_state['values']['items'] as $tid) {
      $term = taxonomy_term_load($tid);
      if (isset($term->name)) {
        $term_names[] = $term->name;
      }
    }
    drupal_set_message(t('You entered the next location: @loc', array('@loc' => implode(', ', $term_names))));
  }
}

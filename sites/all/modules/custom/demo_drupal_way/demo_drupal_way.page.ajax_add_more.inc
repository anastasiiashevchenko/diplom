<?php
/**
 * Implements hook_form().
 */
function demo_drupal_way_ajax_add_more_form($form, &$form_state) {
  $form['add_more'] = array(
    '#type' => 'fieldset',
    '#title' => t('Form API Ajax Add More Example'),
    '#tree' => TRUE,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#prefix' => '<div id="form-ajax-wrapper">',
    '#suffix' => '</div>',
  );

  if (empty($form_state['count'])) {
    $form_state['count'] = 1;
  }

  for ($i = 0; $i < $form_state['count']; $i++) {
    $form['add_more'][$i]['field'] = array(
      '#type' => 'textfield',
      '#title' => t('Some field ...'),
    );
  }

  $form['add_more']['add_more_submit_add'] = array(
    '#type' => 'submit',
    '#value' => t('Add more'),
    '#submit' => array('demo_drupal_way_ajax_add_more_add'),
    '#ajax' => array(
      'wrapper' => 'form-ajax-wrapper',
      'callback' => 'demo_drupal_way_ajax_add_more_update',
    ),
  );

  if ($form_state['count'] > 1) {
    $form['add_more']['add_more_submit_remove'] = array(
      '#type' => 'submit',
      '#value' => t('Remove one'),
      '#submit' => array('demo_drupal_way_ajax_add_more_remove_one'),
      '#ajax' => array(
        'wrapper' => 'form-ajax-wrapper',
        'callback' => 'demo_drupal_way_ajax_add_more_update',
      ),
    );
  }

  return $form;
}

/**
 * Button submit callback. (add)
 */
function demo_drupal_way_ajax_add_more_add($form, &$form_state) {
  $form_state['rebuild'] = TRUE;
  $form_state['count']++;
}

/**
 * Button submit callback. (remove)
 */
function demo_drupal_way_ajax_add_more_remove_one($form, &$form_state) {
  $form_state['rebuild'] = TRUE;
  $form_state['count']--;
}

/**
 * Button ajax callback.
 */
function demo_drupal_way_ajax_add_more_update($form, $form_state) {
  return $form['add_more'];
}

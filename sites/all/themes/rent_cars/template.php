<?php
/**
 * Implements theme_menu_link().
 */

function rent_cars_preprocess_menu_link($variables) {
  dsm(4);
  /*$element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  dsm($element['#href']);

  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";*/
}

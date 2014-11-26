<?php
/**
 * @file
 * Views integration for the dw_views_integration custom module.
 */

/**
 * Implements hook_views_data().
 */
function dw_views_integration_views_data() {
  return array(
    'dw_views_integration' => array(
      'table' => array(
        'group' => 'Drupal Way',
        'base' => array(
          'field' => 'id',
          'title' => 'Drupal Way: Views integration',
          'help' => 'Add Views integration for a custom database table',
        ),
      ),
      'id' => array(
        'title' => t('ID'),
        'help' => t('Drupal Way: ID'),
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_numeric'
        ),
        'sort' => array(
          'handler' => 'views_handler_sort'
        ),
      ),
      'label' => array(
        'title' => t('Label'),
        'help' => t('Drupal Way: label'),
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_string'
        ),
        'sort' => array(
          'handler' => 'views_handler_sort'
        ),
      ),
      'description' => array(
        'title' => t('Description'),
        'help' => t('Drupal Way: description'),
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_string'
        ),
        'sort' => array(
          'handler' => 'views_handler_sort'
        ),
      ),
    ),
  );
}

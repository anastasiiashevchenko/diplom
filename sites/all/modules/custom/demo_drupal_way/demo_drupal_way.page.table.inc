<?php
/**
 * Callback
 */
function demo_drupal_way_table_callback() {
  // Header for table
  $header = array(
    array('data' => t('Title'), 'field' => 'title'),
    array('data' => t('Date created'), 'field' => 'created'),
    array('data' => t('Node type'), 'field' => 'type'),
  );
  $rows = array();
  // Get all nodes
  $nodes = db_select('node', 'n')
    ->fields('n', array('title', 'created', 'type'))
    ->condition('n.status', NODE_PUBLISHED)
    ->condition('n.type', DDW_TEST_NODE_TYPE)
    ->extend('PagerDefault')
    ->limit(DDW_TABLE_NODE_LIMIT)
    ->extend('TableSort')
    ->orderByHeader($header)
    ->execute()
    ->fetchAll();

  if (!empty($nodes)) {
    foreach ($nodes as $node) {
      $rows[] = array(
        check_plain($node->title),
        format_date($node->created),
        $node->type,
      );
    }
  }
  // Return result as "render array"
  return array(
    array(
      '#theme' => 'table',
      '#header' => $header,
      '#rows' => $rows,
    ),
    array(
      '#theme' => 'pager',
      '#quantity' => DDW_TABLE_PAGER_QUANTITY,
      //'#tags' => array('<<', '<', '', '>', '>>'), // Uncomment if need to change navigation elements
    ),
  );
}

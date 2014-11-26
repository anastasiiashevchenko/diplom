<?php
/**
 * Menu callback function.
 */
function demo_drupal_way_jquery_ui_accordion_callback() {
  // Some content.
  $output = '
  <div id="accordion">
    <h3>Section 1</h3>
    <div>
      <p>
      Mauris mauris ante, blandit et, ultrices a, suscipit eget, quam. Integer
      ut neque. Vivamus nisi metus, molestie vel, gravida in, condimentum sit
      amet, nunc. Nam a nibh. Donec suscipit eros. Nam mi. Proin viverra leo ut
      odio. Curabitur malesuada. Vestibulum a velit eu ante scelerisque vulputate.
      </p>
    </div>
    <h3>Section 2</h3>
    <div>
      <p>
      Sed non urna. Donec et ante. Phasellus eu ligula. Vestibulum sit amet
      purus. Vivamus hendrerit, dolor at aliquet laoreet, mauris turpis porttitor
      velit, faucibus interdum tellus libero ac justo. Vivamus non quam. In
      suscipit faucibus urna.
      </p>
    </div>
  </div>';
  // Return result as "render array"
  return array(
    '#type' => 'markup',
    '#markup' => $output,
    '#attached' => array(
      'library' => array(
        array('system', 'ui.accordion'),
      ),
      'js' => array(
        drupal_get_path('module', 'demo_drupal_way') . '/js/demo_drupal_way.jquery_ui_accordion.js' => array('type' => 'file'),
      ),
    )
  );
}

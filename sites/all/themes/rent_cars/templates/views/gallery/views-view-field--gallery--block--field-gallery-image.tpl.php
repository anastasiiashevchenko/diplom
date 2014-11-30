<?php if (function_exists('rent_cars_settings_im_create_url') && function_exists('rent_cars_settings_get_field_value') && isset($row->_field_data['nid']['entity'])): ?>
  <?php $node = $row->_field_data['nid']['entity']; ?>
  <?php $image = rent_cars_settings_im_create_url($node, 'field_gallery_image', 'gallery'); ?>
  <?php $title = rent_cars_settings_get_field_value($node, 'title_field'); ?>
  <?php $htmlcaption = '#' . $node->type . '-' .  $node->nid; ?>
  <img src="<?php print $image; ?>" data-thumb="<?php print $image; ?>" alt="<?php print $title; ?>" title="<?php print $htmlcaption; ?>" />
<?php endif; ?>

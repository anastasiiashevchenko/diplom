<?php $htmlcaption = ''; ?>
<?php $image = isset($row->field_field_gallery_image[0]['raw']['uri']) ? file_create_url($row->field_field_gallery_image[0]['raw']['uri']) : ''; ?>
<?php $title = isset($row->_field_data['nid']['entity']->title) ? $row->_field_data['nid']['entity']->title : ''; ?>
<?php if (isset($row->_field_data['nid']['entity'])): ?>
  <?php $htmlcaption = '#' . $row->_field_data['nid']['entity']->type . '-' .  $row->_field_data['nid']['entity']->nid; ?>
<?php endif; ?>
<img src="<?php print $image; ?>" data-thumb="<?php print $image; ?>" alt="<?php print $title; ?>" title="<?php print $htmlcaption; ?>" />

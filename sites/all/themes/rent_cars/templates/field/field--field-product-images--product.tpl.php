<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="field-items"<?php print $content_attributes; ?>>
    <div class="slider-wrapper theme-default">
      <div id="nivo-slider" class="nivoSlider">
        <?php foreach ($items as $delta => $item): ?>
          <?php $image = image_style_path($item['#image_style'], $item['#item']['uri']); ?>
          <?php $image = file_create_url($image); ?>
          <?php $title = $item['#item']['title']; ?>
          <?php $htmlcaption = '#product-gallery-' .  $delta; ?>
          <?php image_style_create_derivative(image_style_load($item['#image_style']), $item['#item']['uri'], image_style_path($item['#image_style'], $item['#item']['uri'])); ?>
          <img src="<?php print $image; ?>" data-thumb="<?php print $image; ?>" alt="" title="<?php print $htmlcaption; ?>" />
        <?php endforeach; ?>
      </div>
      <?php foreach ($items as $delta => $item): ?>
        <div id="<?php print 'product-gallery-' .  $delta; ?>" class="nivo-html-caption">
          <p><?php print $item['#item']['title']; ?></p>
        </div>
      <?php endforeach; ?>
    </div>
  </div>
</div>

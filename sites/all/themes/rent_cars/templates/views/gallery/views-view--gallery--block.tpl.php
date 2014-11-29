<div class="<?php print $classes; ?>">
  <div class="slider-wrapper theme-default">
    <div id="nivo-slider" class="nivoSlider">
      <?php if ($rows): ?>
        <?php print $rows; ?>
      <?php endif; ?>
    </div>
    <?php if ($header): ?>
      <?php print $header; ?>
    <?php endif; ?>
  </div>
</div>

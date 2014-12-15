<?php $title = render($content['product:title_field']); ?>
<?php $image = render($content['product:field_product_images']); ?>
<?php $body = render($content['body']); ?>
<?php $price = render($content['product:commerce_price']); ?>
<?php $form = render($content['field_product_products']); ?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix node-mt"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print $image; ?>
    <div class="node-product-content">
      <?php if ($title_prefix || $title_suffix || $display_submitted || !$page): ?>
        <?php print render($title_prefix); ?>
          <h3<?php print $title_attributes; ?>><?php print $title; ?></h3>
        <?php print render($title_suffix); ?>
      <?php endif; ?>
      <?php print $body; ?>
    </div>
    <div class="node-product-content-prop">
      <?php print render($content); ?>
    </div>
    <div class="node-product-content-info">
      <?php print $price; ?>
      <?php print $form; ?>
    </div>
  </div>
  <?php if ($links = render($content['links'])): ?>
    <footer>
      <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>
</article>

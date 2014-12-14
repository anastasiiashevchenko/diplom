<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix node-mt"<?php print $attributes; ?>>
  <?php if ($title_prefix || $title_suffix || $display_submitted || !$page): ?>
    <header>
      <?php print render($title_prefix); ?>
        <h2<?php print $title_attributes; ?>><?php print render($content['product:title_field']); ?></h2>
      <?php print render($title_suffix); ?>
    </header>
  <?php endif; ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php hide($content['product:title_field']); ?>
    <?php print render($content); ?>
  </div>
  <?php if ($links = render($content['links'])): ?>
    <footer>
      <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>
  </div>
</article>

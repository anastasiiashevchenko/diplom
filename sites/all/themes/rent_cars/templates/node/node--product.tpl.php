<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix node-mt"<?php print $attributes; ?>>
  <?php if ($title_prefix || $title_suffix || $display_submitted || !$page): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if (!$page): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
    </header>
  <?php endif; ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print render($content); ?>
  </div>
  <?php if ($links = render($content['links'])): ?>
    <footer>
      <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>
  </div>
</article>

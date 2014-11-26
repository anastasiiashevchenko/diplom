/**
 * @file
 * JS
 */
(function($, Drupal, window, document, undefined){
  Drupal.behaviors.jquery_ui_example = {
    attach: function (context, settings) {
      $('#accordion', context).accordion();
    }
  };
})(jQuery, Drupal, this, this.document);

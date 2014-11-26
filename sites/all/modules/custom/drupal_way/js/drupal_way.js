(function ($, Drupal, window, document, undefined) {
  $(document).ready(function(){
    var pathToBbcode = Drupal.settings.drupal_way.path_sceditor;
    $('#comment-form textarea').sceditor({
      plugins: 'bbcode',
      style: pathToBbcode + '/minified/jquery.sceditor.default.min.css',
      toolbar: 'bold|italic|underline|strike|orderedlist|bulletlist|code|quote|link|unlink|emoticon|image|color|removeformat',
      emoticonsCompat: true,
      emoticonsRoot: pathToBbcode + '/',
      width: '698px',
      resizeWidth: false,
      resizeHeight: true,
      colors: '#ffff00|#ff00ff|#00ffff|#ff000|#00ff00|#0000ff',
      emoticons: {
        dropdown: {
          ':)': 'emoticons/smile.png',
          ':angel:': 'emoticons/angel.png',
          ':angry:': 'emoticons/angry.png',
          '8-)': 'emoticons/cool.png',
          ":'(": 'emoticons/cwy.png',
          ':ermm:': 'emoticons/ermm.png',
          ':D': 'emoticons/grin.png',
          '<3': 'emoticons/heart.png',
          ':(': 'emoticons/sad.png',
          ':O': 'emoticons/shocked.png',
          ':P': 'emoticons/tongue.png',
          ';)': 'emoticons/wink.png'
        },
        more: {
          ':alien:': 'emoticons/alien.png',
          ':blink:': 'emoticons/blink.png',
          ':blush:': 'emoticons/blush.png',
          ':cheerful:': 'emoticons/cheerful.png',
          ':devil:': 'emoticons/devil.png',
          ':dizzy:': 'emoticons/dizzy.png',
          ':getlost:': 'emoticons/getlost.png',
          ':happy:': 'emoticons/happy.png',
          ':kissing:': 'emoticons/kissing.png',
          ':ninja:': 'emoticons/ninja.png',
          ':pinch:': 'emoticons/pinch.png',
          ':pouty:': 'emoticons/pouty.png',
          ':sick:': 'emoticons/sick.png',
          ':sideways:': 'emoticons/sideways.png',
          ':silly:': 'emoticons/silly.png',
          ':sleeping:': 'emoticons/sleeping.png',
          ':unsure:': 'emoticons/unsure.png',
          ':woot:': 'emoticons/w00t.png',
          ':wassat:': 'emoticons/wassat.png',
          ':laughing:': 'emoticons/laughing.png',
          ':face:': 'emoticons/face.png',
          ':whistling:': 'emoticons/whistling.png',
          ':love:': 'emoticons/wub.png'
        }
      }
    });

    $('.node .group-drupal-how-to-content-body a.fancybox').fancybox({
      scrollOutside: false,
      closeClick: true,
      autoSize: true,
      autoResize: true,
      autoDimensions: false,
      padding: 8,
      openEffect: 'elastic',
      closeEffect: 'elastic',
      type: 'image'
    });

    $('#mob-menu').accordion({
      header: '.menu-mob-title',
      heightStyle: 'fill',
      icons: false,
      collapsible: false
    });

  });
})(jQuery, Drupal, this, this.document);

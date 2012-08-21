<?php
  function spacetime_emergent_preprocess_html(&$variables) {
    drupal_add_css('http://fonts.googleapis.com/css?family=Ubuntu:400,500,400italic,500italic', array('type' => 'external'));
    drupal_add_css('profiles/spacetime_concerto/themes/custom/spacetime_emergent/libs/js/coin-slider/coin-slider-styles.css', array('type' => 'file'));
    drupal_add_js('profiles/spacetime_concerto/themes/custom/spacetime_emergent/libs/js/coin-slider/coin-slider.js', array('type' => 'file'));
    if ( isset($_REQUEST['render']) )
      $variables['theme_hook_suggestion'] = 'html__render';

// Add conditional stylesheets for IE.
    drupal_add_css(
      drupal_get_path('theme', 'spacetime_emergent') . '/libs/css/ie.css',
      array(
        'group' => CSS_THEME,
        'browsers' => array(
  #        'IE' => 'lte IE 7',
          'IE' => 'IE',
          '!IE' => FALSE,
        ),
        'weight' => 999,
        'every_page' => TRUE,
      )
    );

  } 
  
  /*
    Watch for the ?render argument and process without decoration. Used for 
    AJAX rendering
  */
  function spacetime_emergent_preprocess_page(&$variables) {
    if ( isset($_REQUEST['render']) )
      $variables['theme_hook_suggestion'] = 'page__render';
  

  }

function spacetime_emergent_css_alter(&$css) {
  //  profiles/spacetime_concerto/themes/contrib/twitter_bootstrap/bootstrap/css/bootstrap-responsive.css
  unset($css[drupal_get_path('theme', 'twitter_bootstrap') . '/bootstrap/css/bootstrap-responsive.css']);
  // Remove defaults.css file.
  //  unset($css[drupal_get_path('module', 'system') . '/defaults.css']);
}  
?>
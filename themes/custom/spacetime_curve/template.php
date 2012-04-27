<?php
  function spacetime_curve_preprocess_html(&$variables) {
    drupal_add_css('http://fonts.googleapis.com/css?family=Ubuntu:400,500,400italic,500italic', array('type' => 'external'));
    if ( isset($_REQUEST['render']) )
      $variables['theme_hook_suggestion'] = 'html__render';

// Add conditional stylesheets for IE.
    drupal_add_css(
      drupal_get_path('theme', 'spacetime_curve') . '/libs/css/ie.css',
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
  function spacetime_curve_preprocess_page(&$variables) {
    if ( isset($_REQUEST['render']) )
      $variables['theme_hook_suggestion'] = 'page__render';
  

  }
?>
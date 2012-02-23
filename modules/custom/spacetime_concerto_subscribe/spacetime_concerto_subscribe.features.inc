<?php
/**
 * @file
 * spacetime_concerto_subscribe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spacetime_concerto_subscribe_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

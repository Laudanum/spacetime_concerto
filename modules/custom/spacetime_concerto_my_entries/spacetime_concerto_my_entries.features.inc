<?php
/**
 * @file
 * spacetime_concerto_my_entries.features.inc
 */

/**
 * Implements hook_views_api().
 */
function spacetime_concerto_my_entries_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

<?php
/**
 * @file
 * spacetime_concerto_subscribe.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function spacetime_concerto_subscribe_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emf_account_status_sync';
  $strongarm->value = 1;
  $export['emf_account_status_sync'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emf_campaign_monitor_api_key';
  $strongarm->value = '5bd71569095997412f146142497c0074';
  $export['emf_campaign_monitor_api_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emf_campaign_monitor_client_id';
  $strongarm->value = 'cad0762e157e5a9ecf7a44e16e57d637';
  $export['emf_campaign_monitor_client_id'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emf_last_sync_subscriptions';
  $strongarm->value = 1330035876;
  $export['emf_last_sync_subscriptions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emf_sync_requests_interval';
  $strongarm->value = '0';
  $export['emf_sync_requests_interval'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emf_sync_structure_interval';
  $strongarm->value = '0';
  $export['emf_sync_structure_interval'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emf_sync_subscriptions_interval';
  $strongarm->value = '0';
  $export['emf_sync_subscriptions_interval'] = $strongarm;

  return $export;
}

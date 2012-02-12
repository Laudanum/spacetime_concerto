<?php
/**
 * @file
 * spacetime_concerto_commerce_payment_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function spacetime_concerto_commerce_payment_rules_default_rules_configuration() {
//  not required . we have it from .info
    if ( ! PAYPAL_WPS_ID ) {
        include(DRUPAL_ROOT . "/profiles/spacetime_concerto/spacetime.settings.inc");
    }
    
  $items = array();
  $items['rules_paypal_standard'] = entity_import('rules_config', '{ "rules_paypal_standard" : {
      "LABEL" : "Paypal Standard",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : [ "commerce_payment_methods" ],
      "DO" : [
        { "commerce_payment_enable_paypal_wps" : {
            "commerce_order" : [ "commerce_order" ],
            "payment_method" : { "value" : {
                "method_id" : "paypal_wps",
                "settings" : {
                  "business" : "' . PAYPAL_WPS_ID . '",
                  "currency_code" : "AUD",
                  "language" : "AU",
                  "server" : "' . PAYPAL_SERVER . '",
                  "payment_action" : "sale",
                  "ipn_logging" : "notification"
                }
              }
            }
          }
        }
      ]
    }
  }');
  return $items;
}

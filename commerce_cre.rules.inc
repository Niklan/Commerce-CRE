<?php

/**
 * @file
 * Provide some new Rules for commerce.
 */

/**
 * Implements hook_rules_event_info().
 */
function commerce_cre_rules_event_info() {
  $events = array();

  // Declare our event.
  $events['commerce_cre_event_on_checkout'] = array(
    'label' => t('On checkout page'),
    'group' => t('Commerce Checkout'),
    'variables' => array(
      'checkout_form_id' => array(
        'type' => 'text',
        'label' => t('Checkout form ID'),
      ),
    ),
  );

  return $events;
}

<?php
/**
 * @file
 * techtest_card_form.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function techtest_card_form_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'techtest_payment';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'techtestpayment' => 'techtestpayment',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'techtest_card_form-card_form' => array(
          'module' => 'techtest_card_form',
          'delta' => 'card_form',
          'region' => 'content',
          'weight' => '10',
        ),
        'boxes-payment_form_intro' => array(
          'module' => 'boxes',
          'delta' => 'payment_form_intro',
          'region' => 'content',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['techtest_payment'] = $context;

  return $export;
}

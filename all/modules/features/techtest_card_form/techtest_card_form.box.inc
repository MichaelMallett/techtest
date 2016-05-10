<?php
/**
 * @file
 * techtest_card_form.box.inc
 */

/**
 * Implements hook_default_box().
 */
function techtest_card_form_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'payment_form_intro';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Intro to the payment form';
  $box->options = array(
    'body' => array(
      'value' => 'Lorem ipsum dolor sit amet, his iudico oblique suavitate et, ad indoctum scriptorem vim. Eum idque docendi disputationi eu, offendit pertinacia deterruisset his ea. Everti hendrerit ei duo. Ne porro lorem cetero duo. Te pri appareat dissentias appellantur.

Nam possim neglegentur ex, possit habemus dolores in sit, possit lobortis constituam te eum. Et eos aliquando efficiantur, singulis adolescens est ne. Eu idque dolorem iudicabit nec. Has mundi discere qualisque an, vel at dicam accumsan perpetua.',
      'format' => 'filtered_html',
    ),
  );
  $export['payment_form_intro'] = $box;

  return $export;
}

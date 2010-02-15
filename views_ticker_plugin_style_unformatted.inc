<?php
/**
 * implementaiton of views_plugin_style
 */

class views_ticker_plugin_style_unformatted extends views_plugin_style_default {
 
  /**
   * Set default options
   */
  function options(&$options) {
    parent::options($options);
    $options['speed'] = '0.07';
  }
 
  /**
   * Provide a form for setting options.
   *
   * @param array $form
   * @param array $form_state
   */ 
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['speed'] = array(
      '#type' => 'textfield',
      '#title' => t('Speed'),
      '#description' => t('Default speed is 0.07'),
      '#default_value' => $this->options['speed'],
    );
  }

}
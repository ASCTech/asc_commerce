<?php
/**
 * @file
 * asc_commerce.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function asc_commerce_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['commerce_cart-cart'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'cart',
    'module' => 'commerce_cart',
    'node_types' => array(),
    'pages' => 'store*',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'sidebar',
        'status' => '1',
        'theme' => 'q7',
        'weight' => '-21',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  return $export;
}

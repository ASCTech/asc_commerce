<?php
/**
 * @file
 * asc_commerce.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function asc_commerce_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'body',
        1 => 'product:field_description',
      ),
      'left' => array(
        2 => 'product:field_product_image',
      ),
      'right' => array(
        3 => 'product:commerce_price',
        4 => 'field_product_reference',
      ),
    ),
    'fields' => array(
      'body' => 'header',
      'product:field_description' => 'header',
      'product:field_product_image' => 'left',
      'product:commerce_price' => 'right',
      'field_product_reference' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|product_display|default'] = $ds_layout;

  return $export;
}

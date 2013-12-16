<?php
/**
 * @file
 * asc_commerce.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function asc_commerce_user_default_roles() {
  $roles = array();

  // Exported role: Store Manager.
  $roles['Store Manager'] = array(
    'name' => 'Store Manager',
    'weight' => 5,
  );

  return $roles;
}

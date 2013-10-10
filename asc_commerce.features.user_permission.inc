<?php
/**
 * @file
 * asc_commerce.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asc_commerce_user_default_permissions() {
  $permissions = array();

  // Exported permission: access checkout.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: administer checkout.
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: administer commerce_customer_profile entities.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: administer commerce_order entities.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: administer commerce_product entities.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: administer customer profile types.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: administer payment methods.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: administer payments.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: administer product types.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: administer taxes.
  $permissions['administer taxes'] = array(
    'name' => 'administer taxes',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_tax_ui',
  );

  // Exported permission: configure order settings.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: configure store.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce',
  );

  // Exported permission: create commerce_customer_profile entities.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: create commerce_customer_profile entities of bundle billing.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: create commerce_order entities.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: create commerce_order entities of bundle commerce_order.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: create commerce_product entities.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: create commerce_product entities of bundle conference_registration.
  $permissions['create commerce_product entities of bundle conference_registration'] = array(
    'name' => 'create commerce_product entities of bundle conference_registration',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: create commerce_product entities of bundle dvd.
  $permissions['create commerce_product entities of bundle dvd'] = array(
    'name' => 'create commerce_product entities of bundle dvd',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: create commerce_product entities of bundle journal.
  $permissions['create commerce_product entities of bundle journal'] = array(
    'name' => 'create commerce_product entities of bundle journal',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: create commerce_product entities of bundle product.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: create payments.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: delete payments.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: edit any commerce_customer_profile entity.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit any commerce_customer_profile entity of bundle billing.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit any commerce_order entity.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: edit any commerce_order entity of bundle commerce_order.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: edit any commerce_product entity.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any commerce_product entity of bundle conference_registration.
  $permissions['edit any commerce_product entity of bundle conference_registration'] = array(
    'name' => 'edit any commerce_product entity of bundle conference_registration',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any commerce_product entity of bundle dvd.
  $permissions['edit any commerce_product entity of bundle dvd'] = array(
    'name' => 'edit any commerce_product entity of bundle dvd',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any commerce_product entity of bundle journal.
  $permissions['edit any commerce_product entity of bundle journal'] = array(
    'name' => 'edit any commerce_product entity of bundle journal',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any commerce_product entity of bundle product.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own commerce_customer_profile entities.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit own commerce_customer_profile entities of bundle billing.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit own commerce_order entities.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: edit own commerce_order entities of bundle commerce_order.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: edit own commerce_product entities.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own commerce_product entities of bundle conference_registration.
  $permissions['edit own commerce_product entities of bundle conference_registration'] = array(
    'name' => 'edit own commerce_product entities of bundle conference_registration',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own commerce_product entities of bundle dvd.
  $permissions['edit own commerce_product entities of bundle dvd'] = array(
    'name' => 'edit own commerce_product entities of bundle dvd',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own commerce_product entities of bundle journal.
  $permissions['edit own commerce_product entities of bundle journal'] = array(
    'name' => 'edit own commerce_product entities of bundle journal',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own commerce_product entities of bundle product.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: update payments.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: view any commerce_customer_profile entity.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view any commerce_customer_profile entity of bundle billing.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view any commerce_order entity.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: view any commerce_order entity of bundle commerce_order.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: view any commerce_product entity.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view any commerce_product entity of bundle conference_registration.
  $permissions['view any commerce_product entity of bundle conference_registration'] = array(
    'name' => 'view any commerce_product entity of bundle conference_registration',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: view any commerce_product entity of bundle dvd.
  $permissions['view any commerce_product entity of bundle dvd'] = array(
    'name' => 'view any commerce_product entity of bundle dvd',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: view any commerce_product entity of bundle journal.
  $permissions['view any commerce_product entity of bundle journal'] = array(
    'name' => 'view any commerce_product entity of bundle journal',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: view any commerce_product entity of bundle product.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_customer_profile entities.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view own commerce_customer_profile entities of bundle billing.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view own commerce_order entities.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: view own commerce_order entities of bundle commerce_order.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: view own commerce_product entities.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle conference_registration.
  $permissions['view own commerce_product entities of bundle conference_registration'] = array(
    'name' => 'view own commerce_product entities of bundle conference_registration',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle dvd.
  $permissions['view own commerce_product entities of bundle dvd'] = array(
    'name' => 'view own commerce_product entities of bundle dvd',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle journal.
  $permissions['view own commerce_product entities of bundle journal'] = array(
    'name' => 'view own commerce_product entities of bundle journal',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle product.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view payments.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'commerce_payment',
  );

  return $permissions;
}

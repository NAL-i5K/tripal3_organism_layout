<?php

/**
 * @file
 * i5k_organism_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function i5k_organism_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create data__image'.
  $permissions['create data__image'] = array(
    'name' => 'create data__image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create sbo__database_cross_reference'.
  $permissions['create sbo__database_cross_reference'] = array(
    'name' => 'create sbo__database_cross_reference',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create sbo__relationship'.
  $permissions['create sbo__relationship'] = array(
    'name' => 'create sbo__relationship',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create schema__description'.
  $permissions['create schema__description'] = array(
    'name' => 'create schema__description',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create schema__publication'.
  $permissions['create schema__publication'] = array(
    'name' => 'create schema__publication',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create sio__annotation'.
  $permissions['create sio__annotation'] = array(
    'name' => 'create sio__annotation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create taxrank__infraspecific_taxon'.
  $permissions['create taxrank__infraspecific_taxon'] = array(
    'name' => 'create taxrank__infraspecific_taxon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit data__image'.
  $permissions['edit data__image'] = array(
    'name' => 'edit data__image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own data__image'.
  $permissions['edit own data__image'] = array(
    'name' => 'edit own data__image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own sbo__database_cross_reference'.
  $permissions['edit own sbo__database_cross_reference'] = array(
    'name' => 'edit own sbo__database_cross_reference',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own sbo__relationship'.
  $permissions['edit own sbo__relationship'] = array(
    'name' => 'edit own sbo__relationship',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own schema__description'.
  $permissions['edit own schema__description'] = array(
    'name' => 'edit own schema__description',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own schema__publication'.
  $permissions['edit own schema__publication'] = array(
    'name' => 'edit own schema__publication',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own sio__annotation'.
  $permissions['edit own sio__annotation'] = array(
    'name' => 'edit own sio__annotation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own taxrank__infraspecific_taxon'.
  $permissions['edit own taxrank__infraspecific_taxon'] = array(
    'name' => 'edit own taxrank__infraspecific_taxon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit sbo__database_cross_reference'.
  $permissions['edit sbo__database_cross_reference'] = array(
    'name' => 'edit sbo__database_cross_reference',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit sbo__relationship'.
  $permissions['edit sbo__relationship'] = array(
    'name' => 'edit sbo__relationship',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit schema__description'.
  $permissions['edit schema__description'] = array(
    'name' => 'edit schema__description',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit schema__publication'.
  $permissions['edit schema__publication'] = array(
    'name' => 'edit schema__publication',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit sio__annotation'.
  $permissions['edit sio__annotation'] = array(
    'name' => 'edit sio__annotation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit taxrank__infraspecific_taxon'.
  $permissions['edit taxrank__infraspecific_taxon'] = array(
    'name' => 'edit taxrank__infraspecific_taxon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view data__image'.
  $permissions['view data__image'] = array(
    'name' => 'view data__image',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own data__image'.
  $permissions['view own data__image'] = array(
    'name' => 'view own data__image',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own sbo__database_cross_reference'.
  $permissions['view own sbo__database_cross_reference'] = array(
    'name' => 'view own sbo__database_cross_reference',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own sbo__relationship'.
  $permissions['view own sbo__relationship'] = array(
    'name' => 'view own sbo__relationship',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own schema__description'.
  $permissions['view own schema__description'] = array(
    'name' => 'view own schema__description',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own schema__publication'.
  $permissions['view own schema__publication'] = array(
    'name' => 'view own schema__publication',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own sio__annotation'.
  $permissions['view own sio__annotation'] = array(
    'name' => 'view own sio__annotation',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own taxrank__infraspecific_taxon'.
  $permissions['view own taxrank__infraspecific_taxon'] = array(
    'name' => 'view own taxrank__infraspecific_taxon',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'community leader' => 'community leader',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view sbo__database_cross_reference'.
  $permissions['view sbo__database_cross_reference'] = array(
    'name' => 'view sbo__database_cross_reference',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view sbo__relationship'.
  $permissions['view sbo__relationship'] = array(
    'name' => 'view sbo__relationship',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view schema__description'.
  $permissions['view schema__description'] = array(
    'name' => 'view schema__description',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view schema__publication'.
  $permissions['view schema__publication'] = array(
    'name' => 'view schema__publication',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view sio__annotation'.
  $permissions['view sio__annotation'] = array(
    'name' => 'view sio__annotation',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view taxrank__infraspecific_taxon'.
  $permissions['view taxrank__infraspecific_taxon'] = array(
    'name' => 'view taxrank__infraspecific_taxon',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'community leader' => 'community leader',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}

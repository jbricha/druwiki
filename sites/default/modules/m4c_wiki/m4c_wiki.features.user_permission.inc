<?php
/**
 * @file
 * m4c_wiki.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function m4c_wiki_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create best_practice content'.
  $permissions['create best_practice content'] = array(
    'name' => 'create best_practice content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create projet content'.
  $permissions['create projet content'] = array(
    'name' => 'create projet content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any best_practice content'.
  $permissions['delete any best_practice content'] = array(
    'name' => 'delete any best_practice content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any projet content'.
  $permissions['delete any projet content'] = array(
    'name' => 'delete any projet content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own best_practice content'.
  $permissions['delete own best_practice content'] = array(
    'name' => 'delete own best_practice content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own projet content'.
  $permissions['delete own projet content'] = array(
    'name' => 'delete own projet content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in type_de_guide'.
  $permissions['delete terms in type_de_guide'] = array(
    'name' => 'delete terms in type_de_guide',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in type_de_projet'.
  $permissions['delete terms in type_de_projet'] = array(
    'name' => 'delete terms in type_de_projet',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any best_practice content'.
  $permissions['edit any best_practice content'] = array(
    'name' => 'edit any best_practice content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any projet content'.
  $permissions['edit any projet content'] = array(
    'name' => 'edit any projet content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own best_practice content'.
  $permissions['edit own best_practice content'] = array(
    'name' => 'edit own best_practice content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own projet content'.
  $permissions['edit own projet content'] = array(
    'name' => 'edit own projet content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in type_de_guide'.
  $permissions['edit terms in type_de_guide'] = array(
    'name' => 'edit terms in type_de_guide',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in type_de_projet'.
  $permissions['edit terms in type_de_projet'] = array(
    'name' => 'edit terms in type_de_projet',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}

<?php
/**
 * @file
 * m4c_wiki.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function m4c_wiki_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accueil',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: main-menu:tous-les-guides
  $menu_links['main-menu:tous-les-guides'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tous-les-guides',
    'router_path' => 'tous-les-guides',
    'link_title' => 'Tous les guides',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: main-menu:tous-les-projets
  $menu_links['main-menu:tous-les-projets'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tous-les-projets',
    'router_path' => 'tous-les-projets',
    'link_title' => 'Tous les projets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:toutes-les-demos
  $menu_links['main-menu:toutes-les-demos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'toutes-les-demos',
    'router_path' => 'toutes-les-demos',
    'link_title' => 'Toutes les démos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: navigation:node/add/best-practice
  $menu_links['navigation:node/add/best-practice'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/best-practice',
    'router_path' => 'node/add/best-practice',
    'link_title' => 'Guide',
    'options' => array(
      'attributes' => array(
        'title' => 'Explication pour réaliser une tâche donnée.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/projet
  $menu_links['navigation:node/add/projet'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/projet',
    'router_path' => 'node/add/projet',
    'link_title' => 'Projet',
    'options' => array(
      'attributes' => array(
        'title' => 'Décrit un projet développé par madeforcom.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Accueil');
  t('Guide');
  t('Projet');
  t('Tous les guides');
  t('Tous les projets');
  t('Toutes les démos');


  return $menu_links;
}

<?php
/**
 * @file
 * m4c_wiki.features.inc
 */

/**
 * Implements hook_views_api().
 */
function m4c_wiki_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function m4c_wiki_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'best_practice' => array(
      'name' => t('Guide'),
      'base' => 'node_content',
      'description' => t('Explication pour réaliser une tâche donnée.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'demo' => array(
      'name' => t('Démo'),
      'base' => 'node_content',
      'description' => t('Un lien vers un prototype d\'application ou de réalisation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'projet' => array(
      'name' => t('Projet'),
      'base' => 'node_content',
      'description' => t('Décrit un projet développé par madeforcom.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

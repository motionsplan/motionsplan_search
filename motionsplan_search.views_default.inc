<?php
/**
 * @file
 * motionsplan_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function motionsplan_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'exercise_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_exercises';
  $view->human_name = 'Exercise Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exercise Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_exercise_images' => 'field_exercise_images',
    'title' => 'title',
    'field_exercise_intro' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_exercise_images' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'field_exercise_intro' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Indexed Node: Billeder af øvelsen */
  $handler->display->display_options['fields']['field_exercise_images']['id'] = 'field_exercise_images';
  $handler->display->display_options['fields']['field_exercise_images']['table'] = 'search_api_index_exercises';
  $handler->display->display_options['fields']['field_exercise_images']['field'] = 'field_exercise_images';
  $handler->display->display_options['fields']['field_exercise_images']['label'] = '';
  $handler->display->display_options['fields']['field_exercise_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exercise_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exercise_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_exercise_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_exercise_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_exercise_images']['delta_first_last'] = TRUE;
  $handler->display->display_options['fields']['field_exercise_images']['separator'] = ' ';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_exercises';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Introduktion til øvelse */
  $handler->display->display_options['fields']['field_exercise_intro']['id'] = 'field_exercise_intro';
  $handler->display->display_options['fields']['field_exercise_intro']['table'] = 'search_api_index_exercises';
  $handler->display->display_options['fields']['field_exercise_intro']['field'] = 'field_exercise_intro';
  $handler->display->display_options['fields']['field_exercise_intro']['label'] = '';
  $handler->display->display_options['fields']['field_exercise_intro']['element_label_colon'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_exercises';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'exercise-search';
  $export['exercise_search'] = $view;

  return $export;
}

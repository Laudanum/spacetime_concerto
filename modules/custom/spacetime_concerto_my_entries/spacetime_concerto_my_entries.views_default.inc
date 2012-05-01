<?php
/**
 * @file
 * spacetime_concerto_my_entries.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function spacetime_concerto_my_entries_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'my_entries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'My entries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My entries';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit own webform content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Webform submissions: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  /* Relationship: Webform submissions: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = 1;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Entry number';
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['sid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['sid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['sid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['sid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['sid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['sid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['sid']['format_plural'] = 0;
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['submitted']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['submitted']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['submitted']['alter']['external'] = 0;
  $handler->display->display_options['fields']['submitted']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['submitted']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['submitted']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['submitted']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['submitted']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['submitted']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['submitted']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['submitted']['alter']['html'] = 0;
  $handler->display->display_options['fields']['submitted']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['submitted']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['submitted']['hide_empty'] = 0;
  $handler->display->display_options['fields']['submitted']['empty_zero'] = 0;
  $handler->display->display_options['fields']['submitted']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'g:ia d/m/Y';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Webform submissions: Draft */
  $handler->display->display_options['fields']['is_draft']['id'] = 'is_draft';
  $handler->display->display_options['fields']['is_draft']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['is_draft']['field'] = 'is_draft';
  $handler->display->display_options['fields']['is_draft']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['is_draft']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['is_draft']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['is_draft']['alter']['external'] = 0;
  $handler->display->display_options['fields']['is_draft']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['is_draft']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['is_draft']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['is_draft']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['is_draft']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['is_draft']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['is_draft']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['is_draft']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['is_draft']['alter']['html'] = 0;
  $handler->display->display_options['fields']['is_draft']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['is_draft']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['is_draft']['hide_empty'] = 0;
  $handler->display->display_options['fields']['is_draft']['empty_zero'] = 0;
  $handler->display->display_options['fields']['is_draft']['hide_alter_empty'] = 1;
  /* Field: Webform submissions: View link */
  $handler->display->display_options['fields']['view_submission']['id'] = 'view_submission';
  $handler->display->display_options['fields']['view_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['view_submission']['field'] = 'view_submission';
  $handler->display->display_options['fields']['view_submission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_submission']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_submission']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_submission']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_submission']['hide_alter_empty'] = 1;
  /* Field: Webform submissions: Edit link */
  $handler->display->display_options['fields']['edit_submission']['id'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['edit_submission']['field'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_submission']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_submission']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_submission']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_submission']['hide_alter_empty'] = 1;
  /* Sort criterion: Webform submissions: Submitted */
  $handler->display->display_options['sorts']['submitted']['id'] = 'submitted';
  $handler->display->display_options['sorts']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['sorts']['submitted']['field'] = 'submitted';
  $handler->display->display_options['sorts']['submitted']['order'] = 'DESC';
  $handler->display->display_options['sorts']['submitted']['granularity'] = 'minute';
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['uuid']['value'] = 'c471f132-b7c0-6cb4-f5a6-9395f1d03757';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/entries';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My entries';
  $handler->display->display_options['menu']['description'] = 'A list of all entries submitted.';
  $handler->display->display_options['menu']['weight'] = '-20';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['my_entries'] = $view;

  return $export;
}

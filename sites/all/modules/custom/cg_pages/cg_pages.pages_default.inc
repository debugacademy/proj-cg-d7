<?php
/**
 * @file
 * cg_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cg_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'The homepage for Continuous Good.';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a972310-7cc4-4810-b5bf-384dabc69de1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1f0b0b0d-df75-444e-b98a-50a9ef874c49';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'hero';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'hero',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f0b0b0d-df75-444e-b98a-50a9ef874c49';
    $display->content['new-1f0b0b0d-df75-444e-b98a-50a9ef874c49'] = $pane;
    $display->panels['middle'][0] = 'new-1f0b0b0d-df75-444e-b98a-50a9ef874c49';
    $pane = new stdClass();
    $pane->pid = 'new-98e77a18-859b-4a69-9abb-1d7778ed8fc4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'one_action_continuous_good';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'step-section',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '98e77a18-859b-4a69-9abb-1d7778ed8fc4';
    $display->content['new-98e77a18-859b-4a69-9abb-1d7778ed8fc4'] = $pane;
    $display->panels['middle'][1] = 'new-98e77a18-859b-4a69-9abb-1d7778ed8fc4';
    $pane = new stdClass();
    $pane->pid = 'new-3f3baf41-b608-4767-9262-e706e885e306';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'welcome_section';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'welcome-section',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3f3baf41-b608-4767-9262-e706e885e306';
    $display->content['new-3f3baf41-b608-4767-9262-e706e885e306'] = $pane;
    $display->panels['middle'][2] = 'new-3f3baf41-b608-4767-9262-e706e885e306';
    $pane = new stdClass();
    $pane->pid = 'new-129de4c9-6ee5-4f03-8792-2bb13a7f8d74';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'step_one';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'step-one',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '129de4c9-6ee5-4f03-8792-2bb13a7f8d74';
    $display->content['new-129de4c9-6ee5-4f03-8792-2bb13a7f8d74'] = $pane;
    $display->panels['middle'][3] = 'new-129de4c9-6ee5-4f03-8792-2bb13a7f8d74';
    $pane = new stdClass();
    $pane->pid = 'new-f0b2779d-ff01-4fe8-9587-23d3757861d9';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'step_two';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'step-two',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f0b2779d-ff01-4fe8-9587-23d3757861d9';
    $display->content['new-f0b2779d-ff01-4fe8-9587-23d3757861d9'] = $pane;
    $display->panels['middle'][4] = 'new-f0b2779d-ff01-4fe8-9587-23d3757861d9';
    $pane = new stdClass();
    $pane->pid = 'new-0f90d08d-2d69-4f2a-af52-7152696d7f8d';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'testimonials';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'testimonials',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '0f90d08d-2d69-4f2a-af52-7152696d7f8d';
    $display->content['new-0f90d08d-2d69-4f2a-af52-7152696d7f8d'] = $pane;
    $display->panels['middle'][5] = 'new-0f90d08d-2d69-4f2a-af52-7152696d7f8d';
    $pane = new stdClass();
    $pane->pid = 'new-0b40867c-2c07-4c99-aa33-7929f627a9b6';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'step_three';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'step-three',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '0b40867c-2c07-4c99-aa33-7929f627a9b6';
    $display->content['new-0b40867c-2c07-4c99-aa33-7929f627a9b6'] = $pane;
    $display->panels['middle'][6] = 'new-0b40867c-2c07-4c99-aa33-7929f627a9b6';
    $pane = new stdClass();
    $pane->pid = 'new-c6689502-a89e-4ff9-8089-06ca57d8cfa5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'subscribe';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'subscribe',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'c6689502-a89e-4ff9-8089-06ca57d8cfa5';
    $display->content['new-c6689502-a89e-4ff9-8089-06ca57d8cfa5'] = $pane;
    $display->panels['middle'][7] = 'new-c6689502-a89e-4ff9-8089-06ca57d8cfa5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}

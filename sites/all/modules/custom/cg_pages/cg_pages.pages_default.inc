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
    $pane->pid = 'new-ab0b00ab-a1b0-424c-b7e0-1c3be01f77f0';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'homepage';
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
      'css_id' => '',
      'css_class' => 'hero',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ab0b00ab-a1b0-424c-b7e0-1c3be01f77f0';
    $display->content['new-ab0b00ab-a1b0-424c-b7e0-1c3be01f77f0'] = $pane;
    $display->panels['middle'][0] = 'new-ab0b00ab-a1b0-424c-b7e0-1c3be01f77f0';
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
      'css_id' => '',
      'css_class' => 'one-action-cg',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '98e77a18-859b-4a69-9abb-1d7778ed8fc4';
    $display->content['new-98e77a18-859b-4a69-9abb-1d7778ed8fc4'] = $pane;
    $display->panels['middle'][1] = 'new-98e77a18-859b-4a69-9abb-1d7778ed8fc4';
    $pane = new stdClass();
    $pane->pid = 'new-59583438-569e-4ee9-8f5d-37cd9c860ed2';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'welcome_to_continuous_good';
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
      'css_id' => '',
      'css_class' => 'welcome-cg',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '59583438-569e-4ee9-8f5d-37cd9c860ed2';
    $display->content['new-59583438-569e-4ee9-8f5d-37cd9c860ed2'] = $pane;
    $display->panels['middle'][2] = 'new-59583438-569e-4ee9-8f5d-37cd9c860ed2';
    $pane = new stdClass();
    $pane->pid = 'new-9447e3b9-7f17-403a-97fe-f99977139337';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'step_1';
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
      'css_id' => '',
      'css_class' => 'step-1-cg',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9447e3b9-7f17-403a-97fe-f99977139337';
    $display->content['new-9447e3b9-7f17-403a-97fe-f99977139337'] = $pane;
    $display->panels['middle'][3] = 'new-9447e3b9-7f17-403a-97fe-f99977139337';
    $pane = new stdClass();
    $pane->pid = 'new-d498b72b-f64e-4f28-80a7-393042215c35';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'step_2';
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
      'css_id' => '',
      'css_class' => 'step-2-cg',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd498b72b-f64e-4f28-80a7-393042215c35';
    $display->content['new-d498b72b-f64e-4f28-80a7-393042215c35'] = $pane;
    $display->panels['middle'][4] = 'new-d498b72b-f64e-4f28-80a7-393042215c35';
    $pane = new stdClass();
    $pane->pid = 'new-41cb5aa2-09ae-4a3b-b63e-04138cc97214';
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
      'css_id' => '',
      'css_class' => 'testimonial-cg',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '41cb5aa2-09ae-4a3b-b63e-04138cc97214';
    $display->content['new-41cb5aa2-09ae-4a3b-b63e-04138cc97214'] = $pane;
    $display->panels['middle'][5] = 'new-41cb5aa2-09ae-4a3b-b63e-04138cc97214';
    $pane = new stdClass();
    $pane->pid = 'new-5e8a4b61-9f23-493f-bc70-f8a695ee5299';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'step_3';
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
      'css_id' => '',
      'css_class' => 'step-3-cg',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '5e8a4b61-9f23-493f-bc70-f8a695ee5299';
    $display->content['new-5e8a4b61-9f23-493f-bc70-f8a695ee5299'] = $pane;
    $display->panels['middle'][6] = 'new-5e8a4b61-9f23-493f-bc70-f8a695ee5299';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}

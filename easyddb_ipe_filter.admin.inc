<?php
/**
 * @file easyddb_ipe_filter.admin.inc
 */

/**
 * Defines admin form.
 */
 function easyddb_ipe_filter_admin($form, &$form_state) {
  ctools_include('content');
  $content_types = ctools_content_get_available_types();
  $panel_editor = new panels_renderer_editor();
  $categories = $panel_editor->get_categories($content_types);

  $form = array('#tree' => TRUE);
  $form['table'] = array(
    '#theme' => 'easyddb_ipe_filter_table',
    '#header' => array(t('Content'), t('Show')),
  );

  $settings = variable_get('easyddb_ipe_filter', array());
  foreach ($categories as $key => $category) {
    $form['table'][$key] = array(
     '#type' => 'item',
     '#markup' => $category['title'],
    );
    foreach ($category['content'] as $content) {
      $form['table'][$content['subtype_name']]['title'] = array(
       '#type' => 'item',
       '#markup' => $content['title'],
      );
      $form['table'][$content['subtype_name']]['value'] = array(
       '#type' => 'checkbox',
       '#default_value' => (isset($settings[$content['subtype_name']])) ? 1 : FALSE,
      );
      $form['table'][$content['subtype_name']]['category'] = array(
        '#type' => 'hidden',
        '#value' => $key,
      );
    }
  }
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return $form;
}

/**
 * Admin form submit.
 */
function easyddb_ipe_filter_admin_submit($form, &$form_state) {
  $settings = array();
  foreach ($form_state['values']['table'] as $key => $content) {
    if (isset($content['value']) && $content['value'] == 1) {
      $settings[$key] = $content['category'];
    }
  }
  variable_set('easyddb_ipe_filter', $settings);
}

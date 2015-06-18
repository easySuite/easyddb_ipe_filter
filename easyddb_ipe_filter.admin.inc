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
  $form['easyddb_ipe_filter_table'] = array(
    '#theme' => 'easyddb_ipe_filter_table',
    '#header' => array(t('Content'), t('Show')),
  );

  $settings = variable_get('easyddb_ipe_filter_table', array());
  foreach ($categories as $key => $category) {
    $form['easyddb_ipe_filter_table'][$key] = array(
     '#type' => 'item',
     '#markup' => $category['title'],
    );
    foreach ($category['content'] as $content) {
      $form['easyddb_ipe_filter_table'][$content['subtype_name']]['title'] = array(
       '#type' => 'item',
       '#markup' => $content['title'],
      );
      $value = 0;
      if (isset($settings[$content['subtype_name']]['value']) && $settings[$content['subtype_name']]['value'] == 1) {
        $value = 1;
      }
      $form['easyddb_ipe_filter_table'][$content['subtype_name']]['value'] = array(
       '#type' => 'checkbox',
       '#default_value' => $value,
      );
      $form['easyddb_ipe_filter_table'][$content['subtype_name']]['category'] = array(
        '#type' => 'hidden',
        '#value' => $key,
      );
    }
  }
  return system_settings_form($form);
}

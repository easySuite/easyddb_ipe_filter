<?php
/**
 * @file
 *
 * easyddb_ipe_filter.admin.inc
 */

/**
 * Defines pane list form.
 */
function easyddb_ipe_filter_admin_panes($form, &$form_state) {
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
      $form['easyddb_ipe_filter_table'][$content['subtype_name']]['delta'] = array(
        '#type' => 'hidden',
        '#value' => $content['title'],
      );
      $form['easyddb_ipe_filter_table'][$content['subtype_name']]['type'] = array(
        '#type' => 'hidden',
        '#value' => $content['type_name'],
      );
      $form['easyddb_ipe_filter_table'][$content['subtype_name']]['subtype'] = array(
        '#type' => 'hidden',
        '#value' => $content['subtype_name'],
      );
    }
  }
  return system_settings_form($form);
}

/**
 * Defines admin form.
 */
function easyddb_ipe_filter_default_settings($form, &$form_state) {
  $form['filter_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Default IPE filter settings.'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );

  $roles = user_roles(TRUE);
  // Unset anonymous and authentificated roles.
  unset($roles[1], $roles[2]);

  $ipe_roles = variable_get('easyddb_ipe_filter_roles', array());
  $form['filter_fieldset']['easyddb_ipe_filter_roles'] = array(
    '#type' => 'checkboxes',
    '#options' => $roles,
    '#default_value' => $ipe_roles,
  );

  // Clear theme cache for hook_theme_registry_alter implementation.
  $form['#submit'][] = 'drupal_theme_rebuild';

  return system_settings_form($form);
}

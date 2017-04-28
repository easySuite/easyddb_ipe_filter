<?php
/**
 * @file
 * easyddb_ipe_filter.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function easyddb_ipe_filter_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easyddb_ipe_filter_table';
  $strongarm->value = array(
    'campaign' => array(
      'value' => 1,
      'category' => 'ding-',
      'delta' => 'Relevant campaigns',
      'type' => 'campaign',
      'subtype' => 'campaign',
    ),
    'single_campaign' => array(
      'value' => 1,
      'category' => 'ding-',
      'delta' => 'Single campaigns',
      'type' => 'single_campaign',
      'subtype' => 'single_campaign',
    ),
    'popular' => array(
      'value' => 1,
      'category' => 'ding-',
      'delta' => 'Populært',
      'type' => 'popular',
      'subtype' => 'popular',
    ),
    'interaction_pane' => array(
      'value' => 1,
      'category' => 'ding-',
      'delta' => 'Ding Interaction panel',
      'type' => 'interaction_pane',
      'subtype' => 'interaction_pane',
    ),
    'ding_item_list' => array(
      'value' => 1,
      'category' => 'ding-',
      'delta' => 'Ding item list',
      'type' => 'ding_item_list',
      'subtype' => 'ding_item_list',
    ),
    'ding_nodelist' => array(
      'value' => 1,
      'category' => 'ding-',
      'delta' => 'Nodelist',
      'type' => 'ding_nodelist',
      'subtype' => 'ding_nodelist',
    ),
    'serendipity_ting_object' => array(
      'value' => 1,
      'category' => 'ding-',
      'delta' => 'Ding Serendipitet med TingObject (Materialer)',
      'type' => 'serendipity_ting_object',
      'subtype' => 'serendipity_ting_object',
    ),
    'bibdk_subject_hierarchy-bibdk-subject-hierarchy' => array(
      'value' => 1,
      'category' => 'diverse',
      'delta' => 'Emneoversigt',
      'type' => 'block',
      'subtype' => 'bibdk_subject_hierarchy-bibdk-subject-hierarchy',
    ),
    'ding_event_calendar-ding-event-calendar' => array(
      'value' => 1,
      'category' => 'diverse',
      'delta' => 'Event Calendar',
      'type' => 'block',
      'subtype' => 'ding_event_calendar-ding-event-calendar',
    ),
    'ding_library_opening_hours-ding_library_opened_today' => array(
      'value' => 1,
      'category' => 'diverse',
      'delta' => 'Ding: Today\'s opening hours for all libraries',
      'type' => 'block',
      'subtype' => 'ding_library_opening_hours-ding_library_opened_today',
    ),
    'easyddb_search_ext-search_ext' => array(
      'value' => 1,
      'category' => 'diverse',
      'delta' => 'Search extension',
      'type' => 'block',
      'subtype' => 'easyddb_search_ext-search_ext',
    ),
    'alma_item_list' => array(
      'value' => 1,
      'category' => 'easyddb',
      'delta' => 'Alma search list',
      'type' => 'alma_item_list',
      'subtype' => 'alma_item_list',
    ),
    'section_description_image' => array(
      'value' => 1,
      'category' => 'easyddb',
      'delta' => 'Section description and image.',
      'type' => 'section_description_image',
      'subtype' => 'section_description_image',
    ),
    'menu_block-3' => array(
      'value' => 1,
      'category' => 'menuer',
      'delta' => 'Submenu (menu block)',
      'type' => 'block',
      'subtype' => 'menu_block-3',
    ),
    'menu_block-4' => array(
      'value' => 1,
      'category' => 'menuer',
      'delta' => 'Submenu (secodary menu block)',
      'type' => 'block',
      'subtype' => 'menu_block-4',
    ),
    'carousel' => array(
      'value' => 1,
      'category' => 'ting',
      'delta' => 'Forsidekarussel',
      'type' => 'carousel',
      'subtype' => 'carousel',
    ),
  );
  $export['easyddb_ipe_filter_table'] = $strongarm;

  return $export;
}

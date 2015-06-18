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
    'comment-recent' => array(
      'value' => 0,
      'category' => 'activity',
    ),
    'user-new' => array(
      'value' => 0,
      'category' => 'activity',
    ),
    'user-online' => array(
      'value' => 0,
      'category' => 'activity',
    ),
    'ding_staff-ding_staff_list_all' => array(
      'value' => 0,
      'category' => 'bruger',
    ),
    'ding_staff-ding_staff_library_departments' => array(
      'value' => 0,
      'category' => 'bruger',
    ),
    'block-1' => array(
      'value' => 0,
      'category' => 'custom-blocks',
    ),
    'campaign' => array(
      'value' => 1,
      'category' => 'ding-',
    ),
    'ding_item_list' => array(
      'value' => 1,
      'category' => 'ding-',
    ),
    'menu_title' => array(
      'value' => 0,
      'category' => 'ding-',
    ),
    'library_list' => array(
      'value' => 0,
      'category' => 'ding-',
    ),
    'ding_nodelist' => array(
      'value' => 1,
      'category' => 'ding-',
    ),
    'ding_content_workbench-content_list' => array(
      'value' => 0,
      'category' => 'ding-',
    ),
    'ding_content_workbench-summary' => array(
      'value' => 0,
      'category' => 'ding-',
    ),
    'ding_tabroll-ding_frontpage_tabroll' => array(
      'value' => 0,
      'category' => 'ding-',
    ),
    'ding_event-ding_event_list_frontpage' => array(
      'value' => 0,
      'category' => 'event-panes',
    ),
    'ding_event-ding_event_simple_list' => array(
      'value' => 0,
      'category' => 'event-panes',
    ),
    'ding_event-ding_event_list_same_tag' => array(
      'value' => 0,
      'category' => 'event-panes',
    ),
    'pm_existing_pages' => array(
      'value' => 0,
      'category' => 'existing-pages',
    ),
    'ding_groups-ding_group_overview_simple' => array(
      'value' => 0,
      'category' => 'groups-panes',
    ),
    'ding_groups-panel_pane_1' => array(
      'value' => 0,
      'category' => 'groups-panes',
    ),
    'ding_library-ding_library_libraries_list' => array(
      'value' => 0,
      'category' => 'library-panes',
    ),
    'ding_library-ding_library_leaflet' => array(
      'value' => 0,
      'category' => 'library-panes',
    ),
    'menu-devel' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-menu-og-4' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-menu-og-3' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-features' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-menu-footer-menu-1' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-menu-footer-menu-2' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-menu-footer-menu-3' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-menu-footer-menu-4' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-menu-og-5' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-menu-og-6' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-menu-secondary-menu' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-menu-tabs-menu' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu_block-1' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu_block-2' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu_block-3' => array(
      'value' => 1,
      'category' => 'menus',
    ),
    'menu_block-4' => array(
      'value' => 1,
      'category' => 'menus',
    ),
    'system-navigation' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'system-management' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'system-user-menu' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'system-main-menu' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    '_active' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'devel' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-og-4' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-og-3' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'features' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-footer-menu-1' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-footer-menu-2' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-footer-menu-3' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-footer-menu-4' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-og-5' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-og-6' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'main-menu' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'management' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'navigation' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-secondary-menu' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'menu-tabs-menu' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'user-menu' => array(
      'value' => 0,
      'category' => 'menus',
    ),
    'autologout-info' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'bibdk_subject_hierarchy-bibdk-subject-hierarchy' => array(
      'value' => 1,
      'category' => 'miscellaneous',
    ),
    'ding_availability-legend' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ding_bibliotek_info-bibliotek_info' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ding_dibs-dibs-terms-of-sale' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ding_dibs-dibs-cards-supported' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ding_facetbrowser-facetbrowser' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ding_library-library_address' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ding_library_opening_hours-ding_library_opening_hours' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ding_library_opening_hours-ding_library_opened_today' => array(
      'value' => 1,
      'category' => 'miscellaneous',
    ),
    'ding_print_button-print_button' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ding_toggle_format-toggle' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'easyddb_search_ext-search_ext' => array(
      'value' => 1,
      'category' => 'miscellaneous',
    ),
    'facebookshare-facebook_share' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'formblock-user_register' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'formblock-contact_site' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'formblock-user_password_request' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'og_menu-og_single_menu_block' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'og_menu-og_multi_menu_block' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'opening_hours-week' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'shortcut-shortcuts' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ting-ting_collection_types' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ting-ting_object_types' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ting-ting_relation_anchors' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ting_search-sort_form' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ting_search-search_display_extended_query' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ting_search_carousel-ting_search_carousel' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'workbench-block' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ding_user_frontend-ding-username' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ding_user_frontend-ding-user-loan-number' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ding_user_frontend-ding-user-ajax-login' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'devel-execute_php' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'devel-switch_user' => array(
      'value' => 0,
      'category' => 'miscellaneous',
    ),
    'ding_news-ding_news_frontpage_list' => array(
      'value' => 0,
      'category' => 'news-panes',
    ),
    'ding_news-ding_news_list' => array(
      'value' => 0,
      'category' => 'news-panes',
    ),
    'ding_news-panel_pane_2' => array(
      'value' => 0,
      'category' => 'news-panes',
    ),
    'system-help' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'page_feed_icons' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'page_tabs' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'page_messages' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'page_logo' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'page_slogan' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'page_breadcrumb' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'page_primary_links' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'page_actions' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'page_site_name' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'page_secondary_links' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'page_title' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'page_help' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'pane_header' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'pane_navigation' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'pane_messages' => array(
      'value' => 0,
      'category' => 'page-elements',
    ),
    'custom' => array(
      'value' => 0,
      'category' => 'root',
    ),
    'node' => array(
      'value' => 0,
      'category' => 'root',
    ),
    'alma_item_list' => array(
      'value' => 1,
      'category' => 'ting',
    ),
    'ding_facetbrowser' => array(
      'value' => 0,
      'category' => 'ting',
    ),
    'fulltext' => array(
      'value' => 0,
      'category' => 'ting',
    ),
    'ting_search' => array(
      'value' => 0,
      'category' => 'ting',
    ),
    'carousel' => array(
      'value' => 1,
      'category' => 'ting',
    ),
    'ding_node_search-panel_pane_1' => array(
      'value' => 0,
      'category' => 'view-panes',
    ),
    'og_all_user_group_content-panel_pane_1' => array(
      'value' => 0,
      'category' => 'view-panes',
    ),
    'dams_media_browser' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'ding_content_workbench' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'ding_event' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'ding_groups' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'ding_library' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'ding_news' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'ding_node_search' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'ding_staff' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'ding_staff_admin_users' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'ding_tabroll' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'media_default' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'nodequeue_1' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'nodequeue_2' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'nodequeue_3' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'og_all_user_group_content' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'og_members' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'og_members_admin' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'og_nodes' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'og_user_groups' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'similarterms' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'tags_list' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'webform_results' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'webform_submissions' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'webform_webforms' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'workbench_current_user' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'workbench_edited' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'workbench_new_editorial_content' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'workbench_recent_content' => array(
      'value' => 0,
      'category' => 'views',
    ),
    'locale-language' => array(
      'value' => 0,
      'category' => 'widgets',
    ),
    'node-syndicate' => array(
      'value' => 0,
      'category' => 'widgets',
    ),
    'node-recent' => array(
      'value' => 0,
      'category' => 'widgets',
    ),
    'search-form' => array(
      'value' => 0,
      'category' => 'widgets',
    ),
    'system-powered-by' => array(
      'value' => 0,
      'category' => 'widgets',
    ),
    'user-login' => array(
      'value' => 0,
      'category' => 'widgets',
    ),
    'search_form' => array(
      'value' => 0,
      'category' => 'widgets',
    ),
  );
  $export['easyddb_ipe_filter_table'] = $strongarm;

  return $export;
}

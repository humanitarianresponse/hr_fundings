<?php
/**
 * @file
 * hr_fundings.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hr_fundings_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_funding_methods'
  $field_bases['field_funding_methods'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_funding_methods',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(
            0 => '[current-page:query:og_group_ref]',
          ),
          'display_name' => 'entityreference_1',
          'view_name' => 'hr_fundings_panes',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
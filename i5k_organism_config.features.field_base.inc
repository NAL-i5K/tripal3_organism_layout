<?php
/**
 * @file
 * i5k_organism_config.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function i5k_organism_config_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'bio_data_1_resource_links'.
  $field_bases['bio_data_1_resource_links'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bio_data_1_resource_links',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'data__image'.
  $field_bases['data__image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'data__image',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'ero__nucleic_acid_library'.
  $field_bases['ero__nucleic_acid_library'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'ero__nucleic_acid_library',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(
      'searchable_keys' => array(),
      'storage' => 'field_chado_storage',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'ero__nucleic_acid_library',
  );

  // Exported field_base: 'field_ncbi_taxonomy_id'.
  $field_bases['field_ncbi_taxonomy_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ncbi_taxonomy_id',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(
      'storage' => 'field_chado_storage',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'chado_linker__prop',
  );

  // Exported field_base: 'field_submitter_plans'.
  $field_bases['field_submitter_plans'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_submitter_plans',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_user_assembled_organism'.
  $field_bases['field_user_assembled_organism'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_assembled_organism',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'local__abbreviation'.
  $field_bases['local__abbreviation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'local__abbreviation',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'sql' => array(),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'local__analysis_browser'.
  $field_bases['local__analysis_browser'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'local__analysis_browser',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(
      'searchable_keys' => array(),
      'storage' => 'field_chado_storage',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'local__analysis_browser',
  );

  // Exported field_base: 'local__genome_browser'.
  $field_bases['local__genome_browser'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'local__genome_browser',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(
      'searchable_keys' => array(),
      'storage' => 'field_chado_storage',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'local__genome_browser',
  );

  // Exported field_base: 'local__transcriptome_viewer'.
  $field_bases['local__transcriptome_viewer'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'local__transcriptome_viewer',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(
      'searchable_keys' => array(),
      'storage' => 'field_chado_storage',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'local__transcriptome_viewer',
  );

  // Exported field_base: 'ncbitaxon__common_name'.
  $field_bases['ncbitaxon__common_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'ncbitaxon__common_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'sql' => array(),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'rdfs__type'.
  $field_bases['rdfs__type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'rdfs__type',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'tripal_no_storage',
    ),
    'translatable' => 0,
    'type' => 'rdfs__type',
  );

  // Exported field_base: 'sbo__database_cross_reference'.
  $field_bases['sbo__database_cross_reference'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'sbo__database_cross_reference',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(
      'storage' => 'field_chado_storage',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'sbo__database_cross_reference',
  );

  // Exported field_base: 'sbo__relationship'.
  $field_bases['sbo__relationship'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'sbo__relationship',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(
      'storage' => 'field_chado_storage',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'sbo__relationship',
  );

  // Exported field_base: 'schema__description'.
  $field_bases['schema__description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'schema__description',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 17179869184,
      'text_processing' => 1,
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'sql' => array(),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'schema__publication'.
  $field_bases['schema__publication'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'schema__publication',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(
      'storage' => 'field_chado_storage',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'schema__publication',
  );

  // Exported field_base: 'sio__annotation'.
  $field_bases['sio__annotation'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'sio__annotation',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(
      'storage' => 'field_chado_storage',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'sio__annotation',
  );

  // Exported field_base: 'taxrank__genus'.
  $field_bases['taxrank__genus'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'taxrank__genus',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'sql' => array(),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'taxrank__infraspecific_taxon'.
  $field_bases['taxrank__infraspecific_taxon'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'taxrank__infraspecific_taxon',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(
      'storage' => 'field_chado_storage',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'taxrank__infraspecific_taxon',
  );

  // Exported field_base: 'taxrank__species'.
  $field_bases['taxrank__species'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'taxrank__species',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'sql' => array(),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}

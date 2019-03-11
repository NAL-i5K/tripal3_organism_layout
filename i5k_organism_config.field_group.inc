<?php
/**
 * @file
 * i5k_organism_config.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function i5k_organism_config_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'gp_sbo__database_cross_refe10131|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'gp_sbo__database_cross_refe10131';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cross Reference',
    'weight' => '7',
    'children' => array(),
    'format_type' => 'tripalpane',
    'format_settings' => array(
      'label' => 'Cross Reference',
      'instance_settings' => array(
        'id' => 'tripal_ds-fieldset-gp_sbo__database_cross_refe10131',
        'classes' => 'gp_sbo__database_cross_refe10131 field-group-tripalpane',
        'description' => '',
        'hide' => 1,
      ),
    ),
  );
  $field_groups['gp_sbo__database_cross_refe10131|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'gp_sbo__database_cross_refe5357|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'gp_sbo__database_cross_refe5357';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cross Reference',
    'weight' => '2',
    'children' => array(
      0 => 'sbo__database_cross_reference',
    ),
    'format_type' => 'tripalpane',
    'format_settings' => array(
      'label' => 'Cross Reference',
      'instance_settings' => array(
        'id' => 'tripal_ds-fieldset-gp_sbo__database_cross_refe5357',
        'classes' => 'gp_sbo__database_cross_refe5357 field-group-tripalpane',
        'description' => '',
        'hide' => 1,
      ),
    ),
  );
  $field_groups['gp_sbo__database_cross_refe5357|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'gp_sbo__relationship57023|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'gp_sbo__relationship57023';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Relationship',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Relationship',
      'instance_settings' => array(
        'id' => 'tripal_ds-fieldset-gp_sbo__relationship57023',
        'classes' => 'gp_sbo__relationship57023 field-group-tripalpane',
        'description' => '',
        'hide' => 1,
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['gp_sbo__relationship57023|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'gp_schema__publication87346|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'gp_schema__publication87346';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publication',
      'instance_settings' => array(
        'id' => 'tripal_ds-fieldset-gp_schema__publication87346',
        'classes' => 'gp_schema__publication87346 field-group-tripalpane',
        'description' => '',
        'hide' => 1,
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['gp_schema__publication87346|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'gp_sio__annotation23397|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'gp_sio__annotation23397';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Annotations',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Annotations',
      'instance_settings' => array(
        'id' => 'tripal_ds-fieldset-gp_sio__annotation23397',
        'classes' => 'gp_sio__annotation23397 field-group-tripalpane',
        'description' => '',
        'hide' => 1,
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['gp_sio__annotation23397|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analyses|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'group_analyses';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Analyses',
    'weight' => '5',
    'children' => array(
      0 => 'local__analysis_browser',
    ),
    'format_type' => 'tripalpane',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-analyses field-group-tripalpane',
        'id' => '',
        'hide' => 1,
      ),
    ),
  );
  $field_groups['group_analyses|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_assembly_annotations|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'group_assembly_annotations';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Assembly and Annotation',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'tripalpane',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-assembly-annotations field-group-tripalpane',
        'id' => '',
        'hide' => 1,
      ),
    ),
  );
  $field_groups['group_assembly_annotations|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_props|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'group_details_props';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '4',
    'children' => array(
      0 => 'internal__scaffold_n50',
      1 => 'internal__number_of_genes',
      2 => 'local__contig_n50',
      3 => 'internal__image_credit',
      4 => 'local__gc_content',
      5 => 'local__community_contact',
    ),
    'format_type' => 'tripalpane',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details-props field-group-tripalpane',
        'id' => '',
        'hide' => 1,
      ),
    ),
  );
  $field_groups['group_details_props|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '7',
    'children' => array(
      0 => 'gp_sio__annotation23397',
      1 => 'gp_sbo__relationship57023',
      2 => 'gp_schema__publication87346',
    ),
    'format_type' => 'tripalpane',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details field-group-tripalpane',
        'id' => '',
        'hide' => 1,
      ),
    ),
  );
  $field_groups['group_details|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|TripalEntity|bio_data_1|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organism details',
    'weight' => '0',
    'children' => array(
      0 => 'taxrank__genus',
      1 => 'local__abbreviation',
      2 => 'taxrank__species',
      3 => 'ncbitaxon__common_name',
      4 => 'field_ncbi_taxonomy_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organism details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_details|TripalEntity|bio_data_1|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_links|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'group_external_links';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'External Links',
    'weight' => '10',
    'children' => array(),
    'format_type' => 'tripalpane',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-external-links field-group-tripalpane',
        'id' => '',
        'hide' => 1,
      ),
    ),
  );
  $field_groups['group_external_links|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_files|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'group_files';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '8',
    'children' => array(),
    'format_type' => 'tripalpane',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-files field-group-tripalpane',
        'id' => '',
        'hide' => 1,
      ),
    ),
  );
  $field_groups['group_files|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links_table|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'group_links_table';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_links';
  $field_group->data = array(
    'label' => 'links table',
    'weight' => '13',
    'children' => array(
      0 => 'bio_data_1_resource_links',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'label_visibility' => 3,
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'empty_label_behavior' => 1,
        'table_row_striping' => FALSE,
        'always_show_field_label' => FALSE,
        'classes' => 'group-links-table field-group-table',
      ),
    ),
  );
  $field_groups['group_links_table|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '3',
    'children' => array(
      0 => 'group_links_table',
    ),
    'format_type' => 'tripalpane',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-links field-group-tripalpane',
        'id' => '',
        'hide' => 1,
      ),
    ),
  );
  $field_groups['group_links|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_table|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'group_summary_table';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_summary_tripalpane';
  $field_group->data = array(
    'label' => 'Summary Table',
    'weight' => '11',
    'children' => array(
      0 => 'local__abbreviation',
      1 => 'taxrank__species',
      2 => 'taxrank__genus',
      3 => 'ncbitaxon__common_name',
      4 => 'data__image',
      5 => 'schema__description',
      6 => 'rdfs__type',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'label' => 'Summary Table',
      'instance_settings' => array(
        'label_visibility' => '1',
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'empty_label_behavior' => '1',
        'table_row_striping' => 0,
        'always_show_field_label' => 0,
        'classes' => 'group-summary-table field-group-table',
      ),
    ),
  );
  $field_groups['group_summary_table|TripalEntity|bio_data_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_tripalpane|TripalEntity|bio_data_1|default';
  $field_group->group_name = 'group_summary_tripalpane';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary',
    'weight' => '1',
    'children' => array(
      0 => 'group_summary_table',
    ),
    'format_type' => 'tripalpane',
    'format_settings' => array(
      'label' => 'Summary',
      'instance_settings' => array(
        'id' => 'tripal_ds-fieldset-group_summary_tripalpane',
        'classes' => 'group-summary-tripalpane field-group-tripalpane',
        'description' => '',
        'hide' => 0,
      ),
    ),
  );
  $field_groups['group_summary_tripalpane|TripalEntity|bio_data_1|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Analyses');
  t('Annotations');
  t('Assembly and Annotation');
  t('Cross Reference');
  t('Details');
  t('External Links');
  t('Files');
  t('Links');
  t('Organism details');
  t('Publication');
  t('Relationship');
  t('Summary');
  t('Summary Table');
  t('links table');

  return $field_groups;
}

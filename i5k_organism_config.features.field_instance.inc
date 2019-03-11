<?php
/**
 * @file
 * i5k_organism_config.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function i5k_organism_config_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'TripalEntity-bio_data_1-data__image'.
  $field_instances['TripalEntity-bio_data_1-data__image'] = array(
    'bundle' => 'bio_data_1',
    'deleted' => 0,
    'description' => 'An image for the organism',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => '',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'data__image',
    'label' => 'Organism Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'auto_attach' => TRUE,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'resup' => 0,
      'resup_autostart' => 0,
      'resup_max_filesize' => '',
      'term_accession' => 2968,
      'term_fixed' => FALSE,
      'term_name' => 'Image',
      'term_vocabulary' => 'data',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'TripalEntity-bio_data_1-ero__nucleic_acid_library'.
  $field_instances['TripalEntity-bio_data_1-ero__nucleic_acid_library'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Displays libraries (BAC, YAC etc) associated with this entity.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'ero__nucleic_acid_library',
    'label' => 'Libraries',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => FALSE,
      'base_table' => 'organism',
      'chado_column' => 'organism_id',
      'chado_table' => 'organism',
      'term_accession' => '0000160',
      'term_fixed' => FALSE,
      'term_name' => 'nucleic_acid_library',
      'term_vocabulary' => 'ero',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'tripal',
      'settings' => array(),
      'type' => 'ero__nucleic_acid_library_widget',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-field_ncbi_taxonomy_id'.
  $field_instances['TripalEntity-bio_data_1-field_ncbi_taxonomy_id'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => array(
      0 => array(
        'value' => '',
        'chado-organismprop__organismprop_id' => '',
        'chado-organismprop__organism_id' => '',
        'chado-organismprop__value' => '',
        'chado-organismprop__type_id' => 9579,
        'chado-organismprop__rank' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Please lookup your organism on NCBI at https://www.ncbi.nlm.nih.gov/taxonomy',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'tripal',
        'settings' => array(),
        'type' => 'chado_linker__prop_formatter',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'field_ncbi_taxonomy_id',
    'label' => 'NCBI_taxonomy_id',
    'required' => 1,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'organism',
      'chado_column' => 'organismprop_id',
      'chado_table' => 'organismprop',
      'rows' => 1,
      'term_accession' => 1179,
      'term_fixed' => FALSE,
      'term_name' => 'NCBI taxonomy ID',
      'term_vocabulary' => 'data',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tripal',
      'settings' => array(),
      'type' => 'chado_linker__prop_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-field_submitter_plans'.
  $field_instances['TripalEntity-bio_data_1-field_submitter_plans'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Briefly describe your plans for this genome project (e.g. are you interested in community curation?)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'field_submitter_plans',
    'label' => 'Annotation Plans',
    'required' => 0,
    'settings' => array(
      'auto_attach' => TRUE,
      'term_accession' => 'submitter_plans',
      'term_fixed' => FALSE,
      'term_name' => 'Submitter plans',
      'term_vocabulary' => 'local',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'TripalEntity-bio_data_1-field_user_assembled_organism'.
  $field_instances['TripalEntity-bio_data_1-field_user_assembled_organism'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Were you involved in the generation of this genome assembly?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'field_user_assembled_organism',
    'label' => 'Submitter assembled genome',
    'required' => 0,
    'settings' => array(
      'auto_attach' => TRUE,
      'term_accession' => 'user_assembled_organism_genome',
      'term_fixed' => FALSE,
      'term_name' => 'User assembled organism genome',
      'term_vocabulary' => 'local',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-local__abbreviation'.
  $field_instances['TripalEntity-bio_data_1-local__abbreviation'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'local__abbreviation',
    'label' => 'Abbreviation',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'organism',
      'chado_column' => 'abbreviation',
      'chado_table' => 'organism',
      'term_accession' => 'abbreviation',
      'term_fixed' => FALSE,
      'term_name' => 'abbreviation',
      'term_vocabulary' => 'local',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'display_label' => 1,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-local__analysis_browser'.
  $field_instances['TripalEntity-bio_data_1-local__analysis_browser'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Display a set of analyses related to an organism',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'tripal',
        'settings' => array(
          'setting1' => 'default_value',
        ),
        'type' => 'local__analysis_browser_formatter',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'local__analysis_browser',
    'label' => 'Analyses',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => FALSE,
      'base_table' => 'organism',
      'chado_column' => 'organism_id',
      'chado_table' => 'organism',
      'term_accession' => 'analysis_browser',
      'term_fixed' => FALSE,
      'term_name' => 'analysis_browser',
      'term_vocabulary' => 'local',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'tripal',
      'settings' => array(),
      'type' => 'local__analysis_browser_widget',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-local__genome_browser'.
  $field_instances['TripalEntity-bio_data_1-local__genome_browser'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List the genomes for an organism',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'local__genome_browser',
    'label' => 'Genome Browser',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => FALSE,
      'base_table' => 'organism',
      'chado_column' => 'organism_id',
      'chado_table' => 'organism',
      'term_accession' => 'genome_browser',
      'term_fixed' => FALSE,
      'term_name' => 'genome_browser',
      'term_vocabulary' => 'local',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'tripal',
      'settings' => array(),
      'type' => 'local__genome_browser_widget',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'TripalEntity-bio_data_1-local__transcriptome_viewer'.
  $field_instances['TripalEntity-bio_data_1-local__transcriptome_viewer'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The transcriptome associated with this entity',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'local__transcriptome_viewer',
    'label' => 'Transcriptome',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => FALSE,
      'base_table' => 'organism',
      'chado_column' => 'organism_id',
      'chado_table' => 'organism',
      'term_accession' => 'transcriptome_viewer',
      'term_fixed' => FALSE,
      'term_name' => 'transcriptome_viewer',
      'term_vocabulary' => 'local',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'tripal',
      'settings' => array(),
      'type' => 'local__transcriptome_viewer_widget',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-ncbitaxon__common_name'.
  $field_instances['TripalEntity-bio_data_1-ncbitaxon__common_name'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'ncbitaxon__common_name',
    'label' => 'Common Name',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'organism',
      'chado_column' => 'common_name',
      'chado_table' => 'organism',
      'term_accession' => 'common_name',
      'term_fixed' => FALSE,
      'term_name' => 'common name',
      'term_vocabulary' => 'NCBITaxon',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'display_label' => 1,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-rdfs__type'.
  $field_instances['TripalEntity-bio_data_1-rdfs__type'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The resource type',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'rdfs__type',
    'label' => 'Resource Type',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => TRUE,
      'term_accession' => 'type',
      'term_fixed' => TRUE,
      'term_name' => 'type',
      'term_vocabulary' => 'rdfs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'tripal',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'rdfs__type_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'TripalEntity-bio_data_1-sbo__database_cross_reference'.
  $field_instances['TripalEntity-bio_data_1-sbo__database_cross_reference'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The IDs where this record may be available in other external online databases.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'tripal',
        'settings' => array(),
        'type' => 'sbo__database_cross_reference_formatter',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'sbo__database_cross_reference',
    'label' => 'Cross Reference',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => FALSE,
      'base_table' => 'organism',
      'chado_column' => 'organism_dbxref_id',
      'chado_table' => 'organism_dbxref',
      'term_accession' => '0000554',
      'term_fixed' => FALSE,
      'term_name' => 'Database Cross Reference',
      'term_vocabulary' => 'SBO',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'tripal',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'sbo__database_cross_reference_widget',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-sbo__relationship'.
  $field_instances['TripalEntity-bio_data_1-sbo__relationship'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Other records with relationships to this record.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'tripal',
        'settings' => array(
          'empty' => 'There are no relationships',
          'title' => 'Relationship',
        ),
        'type' => 'sbo__relationship_formatter',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'sbo__relationship',
    'label' => 'Relationship',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => FALSE,
      'base_table' => 'organism',
      'chado_column' => 'organism_relationship_id',
      'chado_table' => 'organism_relationship',
      'items_per_page' => 10,
      'relationships' => array(
        'option1_vocabs' => '',
        'option2_parent' => '',
        'option2_vocab' => '',
        'relationship_types' => '',
      ),
      'term_accession' => '0000374',
      'term_fixed' => FALSE,
      'term_name' => 'Relationship',
      'term_vocabulary' => 'SBO',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'tripal',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'sbo__relationship_widget',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-schema__description'.
  $field_instances['TripalEntity-bio_data_1-schema__description'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'schema__description',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'organism',
      'chado_column' => 'comment',
      'chado_table' => 'organism',
      'format' => 'full_html',
      'term_accession' => 'description',
      'term_fixed' => FALSE,
      'term_name' => 'description',
      'term_vocabulary' => 'schema',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'display_label' => 1,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-schema__publication'.
  $field_instances['TripalEntity-bio_data_1-schema__publication'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This record has been referenced or is sourced from these publications.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'tripal',
        'settings' => array(),
        'type' => 'schema__publication_formatter',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'schema__publication',
    'label' => 'Publication',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => FALSE,
      'base_table' => 'organism',
      'chado_column' => 'organism_pub_id',
      'chado_table' => 'organism_pub',
      'term_accession' => 'publication',
      'term_fixed' => FALSE,
      'term_name' => 'publication',
      'term_vocabulary' => 'schema',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'tripal',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'schema__publication_widget',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-sio__annotation'.
  $field_instances['TripalEntity-bio_data_1-sio__annotation'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Annotations that are associated with this record.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'tripal',
        'settings' => array(),
        'type' => 'sio__annotation_formatter',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'sio__annotation',
    'label' => 'Annotations',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => FALSE,
      'base_table' => 'organism',
      'chado_column' => 'organism_cvterm_id',
      'chado_table' => 'organism_cvterm',
      'term_accession' => '001166',
      'term_fixed' => FALSE,
      'term_name' => 'annotation',
      'term_vocabulary' => 'SIO',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'tripal',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'sio__annotation_widget',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-taxrank__genus'.
  $field_instances['TripalEntity-bio_data_1-taxrank__genus'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'taxrank__genus',
    'label' => 'Genus',
    'required' => TRUE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'organism',
      'chado_column' => 'genus',
      'chado_table' => 'organism',
      'term_accession' => '0000005',
      'term_fixed' => FALSE,
      'term_name' => 'genus',
      'term_vocabulary' => 'TAXRANK',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'display_label' => 1,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'TripalEntity-bio_data_1-taxrank__infraspecific_taxon'.
  $field_instances['TripalEntity-bio_data_1-taxrank__infraspecific_taxon'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => array(
      0 => array(
        'value' => '',
        'chado-organism__type_id' => 0,
        'chado-organism__infraspecific_name' => '',
        'infraname' => array(
          'infraspecific_epithet' => '',
          'specific_epithet' => 0,
        ),
      ),
    ),
    'deleted' => 0,
    'description' => 'The Infraspecific Taxon.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'taxrank__infraspecific_taxon',
    'label' => 'Infraspecific Taxon',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'organism',
      'chado_column' => 'type_id',
      'chado_table' => 'organism',
      'term_accession' => '0000046',
      'term_fixed' => FALSE,
      'term_name' => 'infraspecific_taxon',
      'term_vocabulary' => 'TAXRANK',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tripal',
      'settings' => array(),
      'type' => 'taxrank__infraspecific_taxon_widget',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_1-taxrank__species'.
  $field_instances['TripalEntity-bio_data_1-taxrank__species'] = array(
    'bundle' => 'bio_data_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'taxrank__species',
    'label' => 'Species',
    'required' => TRUE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'organism',
      'chado_column' => 'species',
      'chado_table' => 'organism',
      'term_accession' => '0000006',
      'term_fixed' => FALSE,
      'term_name' => 'species',
      'term_vocabulary' => 'TAXRANK',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'display_label' => 1,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abbreviation');
  t('An image for the organism');
  t('Analyses');
  t('Annotation Plans');
  t('Annotations');
  t('Annotations that are associated with this record.');
  t('Briefly describe your plans for this genome project (e.g. are you interested in community curation?)');
  t('Common Name');
  t('Cross Reference');
  t('Description');
  t('Display a set of analyses related to an organism');
  t('Displays libraries (BAC, YAC etc) associated with this entity.');
  t('Genome Browser');
  t('Genus');
  t('Infraspecific Taxon');
  t('Libraries');
  t('List the genomes for an organism');
  t('NCBI_taxonomy_id');
  t('Organism Image');
  t('Other records with relationships to this record.');
  t('Please lookup your organism on NCBI at https://www.ncbi.nlm.nih.gov/taxonomy');
  t('Publication');
  t('Relationship');
  t('Resource Type');
  t('Species');
  t('Submitter assembled genome');
  t('The IDs where this record may be available in other external online databases.');
  t('The Infraspecific Taxon.');
  t('The resource type');
  t('The transcriptome associated with this entity');
  t('This record has been referenced or is sourced from these publications.');
  t('Transcriptome');
  t('Were you involved in the generation of this genome assembly?');

  return $field_instances;
}

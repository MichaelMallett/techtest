<?php
/**
 * @file
 * techtest_card_form.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function techtest_card_form_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Payment Form',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2efce306-2d13-4a78-9530-c7657e490a0f',
  'type' => 'page',
  'language' => 'und',
  'created' => 1462796308,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ec1514c5-58df-40e1-a5d3-bff374a0aad1',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, nam et quot dissentiunt, animal civibus gubergren no has. Ut appareat consequat vis, ut epicurei patrioque sea. An usu exerci appareat. Sit audire virtute te. Cu veniam legere alienum eam.

Volumus theophrastus ut ius, iriure utamur repudiare at mel, at veri malis dissentias duo. Vis at odio audiam. Rebum laudem te pro, eam eu labitur admodum fierent, ne vis solet officiis delicata. Agam dicat ius et, ne eam persius delenit, eam ad amet nobis causae. Reque error quodsi duo in, per phaedrum eleifend at, mei in esse nominavi facilisi. Dicit prompta in per.
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, nam et quot dissentiunt, animal civibus gubergren no has. Ut appareat consequat vis, ut epicurei patrioque sea. An usu exerci appareat. Sit audire virtute te. Cu veniam legere alienum eam.</p>
<p>Volumus theophrastus ut ius, iriure utamur repudiare at mel, at veri malis dissentias duo. Vis at odio audiam. Rebum laudem te pro, eam eu labitur admodum fierent, ne vis solet officiis delicata. Agam dicat ius et, ne eam persius delenit, eam ad amet nobis causae. Reque error quodsi duo in, per phaedrum eleifend at, mei in esse nominavi facilisi. Dicit prompta in per.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2016-05-09 12:18:28 +0000',
);
  return $nodes;
}

<?php
/**
 * @file
 * spacetime_concerto_subscribe.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function spacetime_concerto_subscribe_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  array(
    \'vid\' => \'2\',
    \'uid\' => \'1\',
    \'title\' => \'Subscribe\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'a3ebb1fd-9d71-a274-898d-3cb4265a7047\',
    \'nid\' => \'2\',
    \'type\' => \'webform\',
    \'language\' => \'und\',
    \'created\' => \'1329938161\',
    \'changed\' => \'1329938726\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'52978cc0-2207-e874-453c-e45d595838a5\',
    \'revision_timestamp\' => \'1329938726\',
    \'revision_uid\' => \'1\',
    \'body\' => array(),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'webform\' => array(
      \'nid\' => \'2\',
      \'confirmation\' => \'\',
      \'confirmation_format\' => NULL,
      \'redirect_url\' => \'<confirmation>\',
      \'status\' => \'1\',
      \'block\' => \'0\',
      \'teaser\' => \'0\',
      \'allow_draft\' => \'0\',
      \'auto_save\' => \'0\',
      \'submit_notice\' => \'1\',
      \'submit_text\' => \'\',
      \'submit_limit\' => \'-1\',
      \'submit_interval\' => \'-1\',
      \'total_submit_limit\' => \'-1\',
      \'total_submit_interval\' => \'-1\',
      \'record_exists\' => TRUE,
      \'roles\' => array(
        \'0\' => \'1\',
        \'1\' => \'2\',
      ),
      \'emails\' => array(),
      \'components\' => array(
        \'1\' => array(
          \'nid\' => 2,
          \'cid\' => \'1\',
          \'pid\' => \'0\',
          \'form_key\' => \'cm_name\',
          \'name\' => \'Name\',
          \'type\' => \'textfield\',
          \'value\' => \'\',
          \'extra\' => array(
            \'title_display\' => \'before\',
            \'private\' => 0,
            \'disabled\' => 0,
            \'unique\' => 0,
            \'conditional_operator\' => \'=\',
            \'width\' => \'\',
            \'maxlength\' => \'\',
            \'field_prefix\' => \'\',
            \'field_suffix\' => \'\',
            \'description\' => \'\',
            \'attributes\' => array(),
            \'conditional_component\' => \'\',
            \'conditional_values\' => \'\',
          ),
          \'mandatory\' => \'0\',
          \'weight\' => \'0\',
          \'page_num\' => 1,
        ),
        \'2\' => array(
          \'nid\' => 2,
          \'cid\' => \'2\',
          \'pid\' => \'0\',
          \'form_key\' => \'glrhju_glrhju\',
          \'name\' => \'Email\',
          \'type\' => \'email\',
          \'value\' => \'\',
          \'extra\' => array(
            \'title_display\' => \'before\',
            \'private\' => 0,
            \'disabled\' => 0,
            \'unique\' => 0,
            \'conditional_operator\' => \'=\',
            \'width\' => \'\',
            \'description\' => \'\',
            \'attributes\' => array(),
            \'conditional_component\' => \'\',
            \'conditional_values\' => \'\',
          ),
          \'mandatory\' => \'1\',
          \'weight\' => \'1\',
          \'page_num\' => 1,
        ),
        \'3\' => array(
          \'nid\' => 2,
          \'cid\' => \'3\',
          \'pid\' => \'0\',
          \'form_key\' => \'cm_f_qitlkl\',
          \'name\' => \'Interest\',
          \'type\' => \'select\',
          \'value\' => \'Entrant\',
          \'extra\' => array(
            \'description\' => \'Please tell us why you are interested in the competition so that we can send you only relevant messages.\',
            \'items\' => \'teacher|I am a tertiary level teacher
entrant|I am interested in entering the competition
media|I am a member of the press
public|I am a member of the public\',
            \'multiple\' => 1,
            \'title_display\' => \'before\',
            \'private\' => 0,
            \'aslist\' => 0,
            \'optrand\' => 1,
            \'conditional_operator\' => \'=\',
            \'other_option\' => NULL,
            \'other_text\' => \'Other...\',
            \'custom_keys\' => FALSE,
            \'options_source\' => \'\',
            \'conditional_component\' => \'\',
            \'conditional_values\' => \'\',
          ),
          \'mandatory\' => \'0\',
          \'weight\' => \'2\',
          \'page_num\' => 1,
        ),
        \'4\' => array(
          \'nid\' => 2,
          \'cid\' => \'4\',
          \'pid\' => \'0\',
          \'form_key\' => \'cm_fo_qitlkr\',
          \'name\' => \'Country\',
          \'type\' => \'select\',
          \'value\' => \'2730677\',
          \'extra\' => array(
            \'items\' => \'2730666|Afghanistan
2730667|Albania
2730668|Algeria
2730669|American Samoa
2730670|Andorra
2730671|Angola
2730672|Anguilla
2730673|Antigua & Barbuda
2730674|Argentina
2730675|Armenia
2730676|Aruba
2730677|Australia
2730678|Austria
2730679|Azerbaijan
2730680|Azores
2730681|Bahamas
2730682|Bahrain
2730683|Bangladesh
2730684|Barbados
2730685|Belarus
2730686|Belgium
2730687|Belize
2730688|Benin
2730689|Bermuda
2730690|Bhutan
2730691|Bolivia
2730692|Bonaire
2730693|Bosnia & Herzegovina
2730694|Botswana
2730695|Brazil
2730696|British Indian Ocean Ter
2730697|Brunei
2730698|Bulgaria
2730699|Burkina Faso
2730700|Burundi
2730701|Cambodia
2730702|Cameroon
2730703|Canada
2730704|Canary Islands
2730705|Cape Verde
2730706|Cayman Islands
2730707|Central African Republic
2730708|Chad
2730709|Channel Islands
2730710|Chile
2730711|China
2730712|Christmas Island
2730713|Cocos Island
2730714|Colombia
2730715|Comoros
2730716|Congo
2730717|Congo Democratic Rep
2730718|Cook Islands
2730719|Costa Rica
2730720|Cote D\\\'Ivoire
2730721|Croatia
2730722|Cuba
2730723|Curacao
2730724|Cyprus
2730725|Czech Republic
2730726|Denmark
2730727|Djibouti
2730728|Dominica
2730729|Dominican Republic
2730730|East Timor
2730731|Ecuador
2730732|Egypt
2730733|El Salvador
2730734|Equatorial Guinea
2730735|Eritrea
2730736|Estonia
2730737|Ethiopia
2730738|Falkland Islands
2730739|Faroe Islands
2730740|Fiji
2730741|Finland
2730742|France
2730743|French Guiana
2730744|French Polynesia
2730745|French Southern Ter
2730746|Gabon
2730747|Gambia
2730748|Georgia
2730749|Germany
2730750|Ghana
2730751|Gibraltar
2730752|Great Britain
2730753|Greece
2730754|Greenland
2730755|Grenada
2730756|Guadeloupe
2730757|Guam
2730758|Guatemala
2730759|Guernsey
2730760|Guinea
2730761|Guinea-Bissau
2730762|Guyana
2730763|Haiti
2730764|Honduras
2730765|Hong Kong
2730766|Hungary
2730767|Iceland
2730768|India
2730769|Indonesia
2730770|Iran
2730771|Iraq
2730772|Ireland
2730773|Isle of Man
2730774|Israel
2730775|Italy
2730776|Jamaica
2730777|Japan
2730778|Jersey
2730779|Jordan
2730780|Kazakhstan
2730781|Kenya
2730782|Kiribati
2730783|Korea North
2730784|Korea South
2730785|Kuwait
2730786|Kyrgyzstan
2730787|Laos
2730788|Latvia
2730789|Lebanon
2730790|Lesotho
2730791|Liberia
2730792|Libya
2730793|Liechtenstein
2730794|Lithuania
2730795|Luxembourg
2730796|Macau
2730797|Macedonia
2730798|Madagascar
2730799|Malawi
2730800|Malaysia
2730801|Maldives
2730802|Mali
2730803|Malta
2730804|Marshall Islands
2730805|Martinique
2730806|Mauritania
2730807|Mauritius
2730808|Mayotte
2730809|Mexico
2730810|Midway Islands
2730811|Moldova
2730812|Monaco
2730813|Mongolia
2730814|Montenegro
2730815|Montserrat
2730816|Morocco
2730817|Mozambique
2730818|Myanmar
2730819|Namibia
2730820|Nauru
2730821|Nepal
2730822|Netherland Antilles
2730823|Netherlands
2730824|Nevis
2730825|New Caledonia
2730826|New Zealand
2730827|Nicaragua
2730828|Niger
2730829|Nigeria
2730830|Niue
2730831|Norfolk Island
2730832|Norway
2730833|Oman
2730834|Pakistan
2730835|Palau Island
2730836|Palestine
2730837|Panama
2730838|Papua New Guinea
2730839|Paraguay
2730840|Peru
2730841|Philippines
2730842|Pitcairn Island
2730843|Poland
2730844|Portugal
2730845|Puerto Rico
2730846|Qatar
2730847|Reunion
2730848|Romania
2730849|Russia
2730850|Rwanda
2730851|Saipan
2730852|Samoa
2730853|Samoa American
2730854|San Marino
2730855|Sao Tome & Principe
2730856|Saudi Arabia
2730857|Senegal
2730858|Serbia
2730859|Serbia & Montenegro
2730860|Seychelles
2730861|Sierra Leone
2730862|Singapore
2730863|Slovakia
2730864|Slovenia
2730865|Solomon Islands
2730866|Somalia
2730867|South Africa
2730868|South Sudan
2730869|Spain
2730870|Sri Lanka
2730871|St Barthelemy
2730872|St Eustatius
2730873|St Helena
2730874|St Kitts-Nevis
2730875|St Lucia
2730876|St Maarten
2730877|St Pierre & Miquelon
2730878|St Vincent & Grenadines
2730879|Sudan
2730880|Suriname
2730881|Swaziland
2730882|Sweden
2730883|Switzerland
2730884|Syria
2730885|Tahiti
2730886|Taiwan
2730887|Tajikistan
2730888|Tanzania
2730889|Thailand
2730890|Togo
2730891|Tokelau
2730892|Tonga
2730893|Trinidad & Tobago
2730894|Tunisia
2730895|Turkey
2730896|Turkmenistan
2730897|Turks & Caicos Is
2730898|Tuvalu
2730899|Uganda
2730900|Ukraine
2730901|United Arab Emirates
2730902|United Kingdom
2730903|United States of America
2730904|Uruguay
2730905|Uzbekistan
2730906|Vanuatu
2730907|Vatican City State
2730908|Venezuela
2730909|Vietnam
2730910|Virgin Islands (Brit)
2730911|Virgin Islands (USA)
2730912|Wake Island
2730913|Wallis & Futana Is
2730914|Yemen
2730915|Zambia
2730916|Zimbabwe\',
            \'multiple\' => 0,
            \'title_display\' => \'before\',
            \'private\' => 0,
            \'aslist\' => 1,
            \'optrand\' => 0,
            \'conditional_operator\' => \'=\',
            \'other_option\' => NULL,
            \'other_text\' => \'Other...\',
            \'description\' => \'\',
            \'custom_keys\' => FALSE,
            \'options_source\' => \'\',
            \'conditional_component\' => \'\',
            \'conditional_values\' => \'\',
          ),
          \'mandatory\' => \'0\',
          \'weight\' => \'3\',
          \'page_num\' => 1,
        ),
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1329938161\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'name\' => \'laudanum\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"contact";i:1;}\',
    \'path\' => array(
      \'pid\' => \'4\',
      \'source\' => \'node/2\',
      \'alias\' => \'content/subscribe\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
)',
);
  return $node_export;
}

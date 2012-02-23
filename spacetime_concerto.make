core = 7.x

api = 2
projects[drupal][version] = "7.12"

; Modules
projects[admin_menu][subdir] = "contrib"
projects[advanced_help][subdir] = "contrib"
projects[ctools][subdir] = "contrib"
projects[ckeditor][subdir] = "contrib"
projects[content_theme][subdir] = "contrib"
projects[insert][subdir] = "contrib"
projects[link][subdir] = "contrib"
projects[mailchimp][subdir] = "contrib"
projects[mailing_list][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[views][subdir] = "contrib"

; laudanum standard
projects[webform][subdir] = "contrib"
; patch to fix ajax callback error Undefined function webform_expand_select_ids()
; http://drupal.org/node/1332100
projects[webform][patch][1132100-8] = "http://drupal.org/files/webform_include_components.patch"
; patch to add token support to webforms (but not profile2 tokens)
projects[webform][patch][1001798-39] = "http://drupal.org/files/1001798-use-tokens.patch"

projects[libraries][subdir] = "contrib"
projects[transliteration][subdir] = "contrib"
projects[pathauto][subdir] = "contrib"
projects[globalredirect][subdir] = "contrib"
projects[xmlsitemap][subdir] = "contrib"
projects[google_analytics][subdir] = "contrib"
projects[wysiwyg][subdir] = "contrib"
projects[features][subdir] = "contrib"
; patch features to handle shortcut sets http://drupal.org/node/986968
projects[features][patch][986968] = http://drupal.org/files/issues/features.shortcut_sets_0.patch

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.4.2/ckeditor_3.4.2.tar.gz"

; features for webform
projects[uuid][subdir] = "contrib"
projects[uuid][version] = "1.x-dev"
; projects[uuid_features][subdir] = "contrib"
projects[node_export][subdir] = "contrib"

projects[webform_alt_ui][subdir] = "contrib"
projects[form_builder][subdir] = "contrib"
projects[options_element][subdir] = "contrib"
projects[ux_elements][subdir] = "contrib"

; campaign monitor
projects[emf][subdir] = "contrib"
projects[emf][version] = "1.x-dev"
; projects[profile2][subdir] = "contrib"

; developer
projects[devel][subdir] = "developer"
projects[coder][subdir] = "developer"
projects[devel_themer][subdir] = "developer"
projects[module_filter][subdir] = "developer"

; social
projects[addthis][subdir] = "contrib"
projects[addthis][version] = "2.1-beta1"

; asset handling
; colorbox & libraries
projects[colorbox][subdir] = "contrib"
libraries[colorbox][download][type] = "git"
libraries[colorbox][download][url] = "git://github.com/jackmoore/colorbox.git"
libraries[colorbox][destination] = "libraries"   

; multifile upload
projects[plupload][subdir] = "contrib"
projects[plupload][version] = "1.x-dev"
; prevent conflict with field entity module
projects[plupload][patch] = "http://drupal.org/files/issues/1240654-plupload-namespace-file-uri-to-object.patch"
libraries[plupload][download][type] = "git"
libraries[plupload][download][url] = "git://github.com/moxiecode/plupload.git"
; libraries[plupload][download][type] = "get"
; libraries[plupload][download][url] = https://github.com/downloads/moxiecode/plupload/plupload_1_5_1_1.zip
; libraries[plupload][destination] = "libraries"   

; Commerce dependencies
projects[entity][subdir] = "contrib"
projects[rules][subdir] = "contrib"
; projects[addressfield][subdir] = "contrib"
; 
; ; Commerce
; projects[commerce][subdir] = "contrib"
; projects[commerce_australia][subdir] = "contrib"
; projects[commerce_paypal][subdir] = "contrib"
; projects[commerce_paypal][version] = "1.x-dev"
; 
; projects[commerce_kickstart][type] = "profile"
; projects[commerce_kickstart][download][type] = "get"
; projects[commerce_kickstart][download][url] = "http://ftp.drupal.org/files/projects/commerce_kickstart-7.x-1.3-no-core.tar.gz"
; 
; 
; ; explicitly declare type = module or this kills drush make
; projects[webform_commerce][type] = "module"
; projects[webform_commerce][destination] = "modules/contrib"   
; projects[webform_commerce][subdir] = "contrib"
; projects[webform_commerce][download][type] = "git"
; projects[webform_commerce][download][url] = "git://github.com/Laudanum/webform_commerce.git"

; Themes
projects[metropolis][subdir] = "contrib"
projects[metropolis][version] = "1.2"


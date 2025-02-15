core = 7.x

api = 2
projects[drupal][version] = "7.12"

; Modules
projects[admin_menu][subdir] = "contrib"
; projects[admin_menu][patch][1030856-13] = "http://drupal.org/files/admin_menu-invalid-arg-admin_menu_merge_tree-1030856-13.patch"
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
projects[webform_validation][subdir] = "contrib"
; patch to fix ajax callback error Undefined function webform_expand_select_ids()
; http://drupal.org/node/1332100
; projects[webform][patch][1132100-8] = "http://drupal.org/files/webform_include_components.patch"
; patch to add token support to webforms (but not profile2 tokens)
; projects[webform][patch][1001798-39] = "http://drupal.org/files/1001798-use-tokens.patch"

projects[libraries][subdir] = "contrib"
projects[transliteration][subdir] = "contrib"
projects[pathauto][subdir] = "contrib"
; projects[globalredirect][subdir] = "contrib"
projects[xmlsitemap][subdir] = "contrib"
projects[google_analytics][subdir] = "contrib"
projects[wysiwyg][subdir] = "contrib"
projects[features][subdir] = "contrib"
; patch features to handle shortcut sets http://drupal.org/node/986968
; projects[features][patch][986968] = http://drupal.org/files/issues/features.shortcut_sets_0.patch
projects[strongarm][subdir] = "contrib"

projects[conditional_styles][subdir] = "contrib"
projects[disable_messages][subdir] = "contrib"
projects[logintoboggan][subdir] = "contrib"
projects[jasm][subdir] = "contrib"
projects[captcha][subdir] = "contrib"
projects[recaptcha][subdir] = "contrib"

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

projects[menu_token][subdir] = "contrib"

; campaign monitor
projects[emf][subdir] = "contrib"
projects[emf][version] = "1.x-dev"
; projects[profile2][subdir] = "contrib"
; projects[campaignmonitor][subdir] = "contrib"
projects[profile2][subdir] = contrib
libraries[campaignmonitor][download][type] = "git"
libraries[campaignmonitor][download][url] = "https://github.com/campaignmonitor/createsend-php.git"
libraries[campaignmonitor][download][branch] = 1.0.11

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

projects[media][subdir] = "contrib"
projects[media][version] = "2.x-dev"
projects[file_entity][subdir] = "contrib"
projects[file_entity][version] = "2.x-dev"
projects[video_filter][subdir] = "contrib"

projects[imageblock][subdir] = "contrib"
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

; projects[twitter_bootstrap][type] = "theme"
; projects[twitter_bootstrap][subdir] = contrib
; projects[twitter_bootstrap][version] = 2.x-dev
projects[twitter_bootstrap][download][type] = "git"
projects[twitter_bootstrap][download][url] = "http://git.drupal.org/project/twitter_bootstrap.git"
projects[twitter_bootstrap][download][branch] = "7.x-2.x"
projects[twitter_bootstrap][destination] = "themes/contrib/twitter_bootstrap"
projects[twitter_bootstrap][subdir] = "contrib"
; libraries[bootstrap][download][type] = "git"
; libraries[bootstrap][download][url] = "git://github.com/twitter/bootstrap.git"
libraries[bootstrap][download][type] = "get"
libraries[bootstrap][download][url] = "http://twitter.github.com/bootstrap/assets/bootstrap.zip"
libraries[bootstrap][destination] = "themes/contrib/twitter_bootstrap"   
; twitter bootstrap requires 1.7 jquery
projects[jquery_update][subdir] = "contrib"
projects[jquery_update][version] = "7.x-2.x-dev"

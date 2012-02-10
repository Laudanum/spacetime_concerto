core = 7.x

api = 2
projects[drupal][version] = "7.12"

; Modules
projects[admin_menu][destination] = "contrib"
projects[advanced_help][destination] = "contrib"
projects[ctools][destination] = "contrib"
projects[ckeditor][destination] = "contrib"
projects[content_theme][destination] = "contrib"
projects[insert][destination] = "contrib"
projects[link][destination] = "contrib"
projects[mailchimp][destination] = "contrib"
projects[mailing_list][destination] = "contrib"
projects[token][destination] = "contrib"
projects[views][destination] = "contrib"

; laudanum standard
projects[webform][destination] = "contrib"
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
projects[uuid_features][subdir] = "contrib"
projects[node_export][subdir] = "contrib"

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
libraries[plupload][destination] = "libraries"   

; Commerce
projects[commerce][subdir] = "contrib"
projects[commerce_australia][subdir] = "contrib"
projects[commerce_paypal][subdir] = "contrib"
projects[commerce_paypal][version] = "1.x-dev"

projects[commerce_webform][subdir] = "contrib"
projects[commerce_webform][download][type] = "git"
projects[commerce_webform][download][url] = "git://github.com/avr/webform_commerce.git"

; Themes
projects[metropolis][subdir] = "sites/all/themes/contrib/metropolis"
projects[metropolis][version] = "1.2"


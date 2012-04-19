<?php
/*
# discover the ssh key directories used for home by apache
sudo -u apache ssh -v git@github.com
debug1: identity file /var/www/.ssh/id_rsa type -1

# make a keey for the apache user
sudo -u apache mkdir /var/www/.ssh/; sudo -u apache ssh-keygen -f /var/www/.ssh/id_rsa && sudo -u apache less /var/www/.ssh/id_rsa.pub

# add the key to github

# target our repo - note the trailing .git
REPO=/srv/www/spacetimeconcerto.com/staging/profiles/spacetime_concerto/.git

# chown everything in the repo to apache
sudo chown -R apache $REPO

# test the method
sudo -u apache git --git-dir=$REPO reset --hard HEAD && sudo -u apache git --git-dir=$REPO pull

# create a php file to hit from github
sudo -u apache git --git-dir=/home/laudanum/public_html/blackbeetle.com.au/blackbeetle-profile/.git reset --hard HEAD && sudo -u apache git --git-dir=/home/laudanum/public_html/blackbeetle.com.au/blackbeetle-profile/.git pull

# point github to it
admin > Repository Administration > Service Hooks > Post-Receive URLs
*/

  $DRUPAL = "/srv/www/spacetimeconcerto.com/versions/v0.2";
  $TREE   = "/srv/www/spacetimeconcerto.com/versions/v0.2/profiles/spacetime_concerto";
  $REPO   = "$TREE/.git";
  $URI    = "staging.spacetimeconcerto.com";
  
// Use in the "Post-Receive URLs" section of your GitHub repo.
  error_log(var_export($_REQUEST['payload'], TRUE));
  if ( $_REQUEST['payload'] ) {
//    error_log(var_export($_REQUEST['payload'], TRUE));
  
//  move all of this into a shell script as github is giving up
    run_cmd("sh $TREE/spacetime-post-receive.sh > /dev/null 2>/dev/null &");
/*
    run_cmd("git --git-dir=$REPO reset --hard HEAD");

//  apache doesn't have `cd` so use fetch/merge instead
    run_cmd("git --git-dir=$REPO fetch");    
    run_cmd("git --git-dir=$REPO --work-tree=$TREE merge origin/master");
    
//  drush cc all redirect stderr to stdout
    run_cmd("drush -r $DRUPAL --uri=$URI cc all  2>&1");
*/
  }
  print "\nOK.";
  
  
  function run_cmd($command) {
    error_log($command);
    echo "<pre>";
    echo $command . "\n<strong style='color:red'>";
    flush();
    echo shell_exec($command);
    echo "</strong>\n";
    echo "</pre>";
    flush();
  }
?>

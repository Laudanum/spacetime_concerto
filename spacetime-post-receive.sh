DRUPAL="/srv/www/spacetimeconcerto.com/versions/v0.2"
TREE="/srv/www/spacetimeconcerto.com/versions/v0.2/profiles/spacetime_concerto"
REPO="$TREE/.git"
URI="staging.spacetimeconcerto.com"

git --git-dir=$REPO reset --hard HEAD

#  apache doesn't have `cd` so use fetch/merge instead
git --git-dir=$REPO fetch
git --git-dir=$REPO --work-tree=$TREE merge origin/master
    
# drush cc all redirect stderr to stdout
drush -r $DRUPAL --uri=$URI cc all  2>&1

<?php


/**
 * @file
 *   The hosting feature definition for HTTP basic authentication.
 */

/**
 * Register a hosting feature with Aegir.
 *
 * This will be used to generate the 'admin/hosting' page.
 *
 * @return
 *  associative array indexed by feature key.
 */
function aegir_make_working_copy_hosting_feature() {
  $features['aegir_make_working_copy'] = array(
    // title to display in form
    'title' => t('Aegir Drush Make Working Copy'),
    // description
    'description' => t('Allows admins to create a platform using the working copy option for drush make.'),
    // initial status ( HOSTING_FEATURE_DISABLED, HOSTING_FEATURE_ENABLED, HOSTING_FEATURE_REQUIRED )
    'status' => HOSTING_FEATURE_DISABLED,
    // module to enable/disable alongside feature
    'module' => 'aegir_make_working_copy',
    // which group to display in ( null , experimental )
    'group' => 'experimental'
  );
  return $features;
}

<?php

include_once(dirname(__FILE__) . '/../provision.service.inc');

/**
 * Expose the service type this extension defines to provision.
 *
 * @return
 *   An array with the service type the key, and the default implementation the value.
 */
function aegir_make_working_copy_provision_services() {
  return array('aegir_make_working_copy' => NULL);
}

/**
 * The aegir_make_working_copy service base class.
 */
class provisionService_aegir_make_working_copy extends provisionService {
  public $service = 'aegir_make_working_copy';

  /**
   * Add the subfolder_path property to the site context.
   */
  static function subscribe_platform($context) {
    $context->setProperty('make_working_copy', FALSE);
  }
}

/**
 *  Implements drush_hook_provision_verify_validate().
 */
function drush_aegir_make_working_copy_provision_verify_validate() {
  if (d()->type == 'platform') {
    if (!empty(d()->make_working_copy)) {
      drush_set_option('working-copy', TRUE);
    }
  }

}

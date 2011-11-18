<?php

/**
 * Implementation of hook_hosting_site_context_options().
 */
function aegir_make_working_copy_hosting_platform_context_options(&$task) {
  if (isset($task->ref->aegir_make_working_copy) && !empty($task->ref->aegir_make_working_copy)) {
    $task->context_options['make_working_copy'] = $task->ref->aegir_make_working_copy;
  }
  else {
    $task->context_options['make_working_copy'] = 'null';
  }
}

/**
 * Implementation of hook_drush_context_import().
 */
function aegir_make_working_copy_drush_context_import($context, &$node) {
  if ($context->type == 'platform') {
    if (isset($context->make_working_copy) && !empty($context->make_working_copy)) {
      $node->make_working_copy = $context->aegir_make_working_copy;
    }
  }
}

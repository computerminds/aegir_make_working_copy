(function($) {
  Drupal.behaviors.aegir_make_working_copy = function (context) {
    $('.aegir-make-working-copy-source:not(.aegir-make-working-copy-processed)', context)
      .addClass('aegir-make-working-copy-processed')
      .bind('change', function() {
        Drupal.aegir_make_working_copy.update_visibility($(this));
      })
      .bind('keyup', function() {
        Drupal.aegir_make_working_copy.update_visibility($(this));
      })
      .each(function() {
        Drupal.aegir_make_working_copy.update_visibility($(this));
      });
  }
  
  Drupal.aegir_make_working_copy = Drupal.aegir_make_working_copy || {};
  
  Drupal.aegir_make_working_copy.update_visibility = function($elem) {
    if ($elem.val()) {
      $('.aegir-make-working-copy-target').parents('.form-item')
        .show();
    }
    else {
      $('.aegir-make-working-copy-target').parents('.form-item')
        .hide();
    }
  }
  
})(jQuery);

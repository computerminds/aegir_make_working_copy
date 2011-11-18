Aegir Drush Make Working Copy
=============================

Introduction
------------

This is a simple module and drush script for Aegir that allows you to provision 
platforms from make files using Drush make's --working-copy option.

If you don't know what Aegir is, you'll probably want to start there and come
back when you really know that you want to use this code.
http://aegirproject.org/

Installation
------------

There are two parts to the code:
- A Drupal module for hostmaster - contained in the /hosting directory. Install
  this like any other Drupal module into you hostmaster site.
- A provision Drush script - contained in the /provision directory. Copy this
  into /var/aegir/.drush/provision/aegir_make_working_copy/ on your Aegir master
   server.

Now just enable the module in the Aegir frontend, and you're ready to go.


Usage
-----

When creating a platform in Hostmaster from a make file, you will be given the 
option of passing the working copy option.


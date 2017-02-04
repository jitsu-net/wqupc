# Makefile.am

ACLOCAL_AMFLAGS = -I m4

SUBDIRS = \
  include \
  src \
  tests

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = \
	@PACKAGE_NAME@@PACKAGE_MAJOR_VERSION@.pc

SUFFIXES = @PACKAGE_MAJOR_VERSION@.pc
.pc@PACKAGE_MAJOR_VERSION@.pc:
	cp $< $@


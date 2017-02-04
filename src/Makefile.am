# src/Makefile.am

AM_CFLAGS = \
	-g -O2 \
	$(PTHREAD_CFLAGS) \
	-I@top_srcdir@/include \
	-I@top_builddir@/include \
	-Wall \
	-Wpedantic \
	-Werror

AM_CXXFLAGS = \
	-g -O2 \
	$(PTHREAD_CFLAGS) \
	$(BOOST_CXXFLAGS) \
	-I@top_srcdir@/include \
	-I@top_builddir@/include \
	-Wall \
	-Wpedantic \
	-Werror

AM_LDFLAGS = \
	$(PTHREAD_LIBS) \
	$(BOOST_LDFLAGS)

lib_LTLIBRARIES = \
	libwqupc@PACKAGE_MAJOR_VERSION@.la

libwqupc@PACKAGE_MAJOR_VERSION@_la_SOURCES = \
	wqupc.cxx


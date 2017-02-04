# tests/Makefile.am

gtest_ldflags = \
	-lgtest \
	-lgtest_main


AM_CFLAGS = \
	-g -O2 \
	$(PTHREAD_CFLAGS) \
	$(gtest_cflags) \
	-I@top_srcdir@/include \
	-I@top_builddir@/include \
	-Wall \
	-Wpedantic \
	-Werror

AM_CXXFLAGS = \
	-g -O2 \
	$(PTHREAD_CFLAGS) \
	$(BOOST_CXXFLAGS) \
	$(gtest_cxxflags) \
	-I@top_srcdir@/include \
	-I@top_builddir@/include \
	-Wall \
	-Wpedantic \
	-Werror

AM_LDFLAGS = \
	$(PTHREAD_LIBS) \
	$(BOOST_LDFLAGS) \
	-L@top_builddir@/src \
	$(gtest_ldflags)

TESTS = \
	test-wqupc

check_PROGRAMS = test-wqupc
test_wqupcdir = @bindir@
test_wqupc_SOURCES = test-wqupc.cxx
test_wqupc_LDADD = \
	-l@PACKAGE_BASE_LIBNAME@@PACKAGE_MAJOR_VERSION@



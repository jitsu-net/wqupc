# configure.ac

AC_PREREQ([2.69])
AC_INIT( [libwqupc], [1.0.0], [ian@xaepient.com] )
AC_SUBST([LIBNAME],[wqupc])
AC_CONFIG_AUX_DIR([at-aux])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SRCDIR([src/wqupc.cxx])
AM_INIT_AUTOMAKE([1.15 foreign -Wall -Werror])

# Version information:
AC_SUBST([PACKAGE_BASE_LIBNAME],[${PACKAGE#*lib}])
AC_SUBST([PACKAGE_MAJOR_VERSION],[${PACKAGE_VERSION%%.*}])

AM_PROG_AR
LT_INIT

AC_PROG_CXX
AC_PROG_LIBTOOL
AX_CXX_COMPILE_STDCXX_14

GCC_WARN_CXXFLAGS="-fdiagnostics-color=auto"

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES(
  libwqupc.pc
  Makefile
  src/Makefile
  include/Makefile
  include/wqupc/Makefile
  tests/Makefile
)
AC_OUTPUT


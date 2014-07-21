# this is example-file: configure.ac

# initial information about the project
AC_INIT([ngui],[0.0.1],[new299@sgenomics.org])

# check if the source folder is correct
AC_CONFIG_SRCDIR([src/ngui/ngui.cpp])

# Checks for programs

# check for C++ preprocessor and compiler and the library compiler
AC_PROG_CXXCPP
AC_PROG_CXX
AC_PROG_CC
AC_PROG_CPP
AM_PROG_CC_C_O
AC_PROG_RANLIB

# automake initialisation and check for minimal automake API version 1.9
AM_INIT_AUTOMAKE([1.9])

# use the C++ compiler for the following checks
AC_LANG([C++])

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([string])
AC_CHECK_HEADERS([iostream])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T

# Check for needed libraries
PKG_CHECK_MODULES([sdl2],  [sdl2])

# distribute additional compiler and linker flags
# --> set these variables instead of CXXFLAGS or LDFLAGS
AC_SUBST([AM_CXXFLAGS])
AC_SUBST([AM_LDFLAGS])

# files to generate via autotools (.am or .in source files)
AC_CONFIG_FILES([Makefile])
AC_CONFIG_FILES([src/ngui/Makefile])
AC_CONFIG_FILES([src/ngui/libngui.pc])

# generate the final Makefile etc.
AC_OUTPUT

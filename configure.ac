# this is example-file: configure.ac

# initial information about the project
AC_INIT([ngui], 
        m4_esyscmd([build-aux/git-version-gen .tarball-version]),
        [new299@sgenomics.org])

# check if the source folder is correct
AC_CONFIG_SRCDIR([src/ngui/ngui.cpp])

AC_CONFIG_HEADERS([config.h])

# automake initialisation and check for minimal automake API version 1.9
AM_INIT_AUTOMAKE([1.9])

# Checks for programs
AC_PROG_INSTALL
AC_PROG_MKDIR_P
AC_PATH_PROG([CAT], [cat])
AC_PATH_PROG([CHMOD], [chmod])
AC_PATH_PROG([CP], [cp])
AC_PATH_PROG([DATE], [date])
AC_PATH_PROG([ECHO], [echo])
AC_PATH_PROG([ECHO], [echo])
AC_PATH_PROG([MV], [mv])
AC_PATH_PROG([PERL], [perl])
AC_PATH_PROG([TAR], [tar gtar])
AC_PATH_PROG([TEST], [test])
AC_PATH_PROG([XARGS], [xargs])
PKG_PROG_PKG_CONFIG

# check for C++ preprocessor and compiler and the library compiler
AC_PROG_CXXCPP
AC_PROG_CXX
AC_PROG_CC
AC_PROG_CPP
AM_PROG_CC_C_O
AM_PROG_LIBTOOL


# use the C++ compiler for the following checks
AC_LANG([C++])

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([string])
AC_CHECK_HEADERS([iostream])
AC_CHECK_HEADERS([stdbool.h])
AC_CHECK_HEADERS([time.h])
AC_CHECK_HEADERS([stdio.h])
AC_CHECK_HEADERS([string.h])
AC_CHECK_HEADERS([stdio.h])
AC_CHECK_HEADERS([limits.h])
AC_CHECK_HEADERS([stdint.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T

# Check for needed libraries
PKG_CHECK_MODULES([sdl2],  [sdl2])
PKG_CHECK_MODULES([SDL2_ttf],  [SDL2_ttf])

# Debian packaging
AC_PATH_PROG([DEBUILD], [dpkg-buildpackage], [notfound])
AC_ARG_ENABLE([deb],
              [AS_HELP_STRING([--enable-deb=@<:@yes/no@:>@],
                              [Configure for building Debian package @<:@default=no@:>@ (requires dpkg- buildpackage)])],
                              [AS_IF([$TEST "x$enable_deb" = xyes],
                                     [AS_IF([$TEST "x$DEBUILD" = xnotfound],
                                            [AC_MSG_ERROR([dpkg-buildpackage is required for --enable-deb])])])],
                                            [enable_deb=no])
AM_CONDITIONAL([BUILDING_DEB], [$TEST "x$enable_deb" = xyes])

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

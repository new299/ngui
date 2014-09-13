AM_CXXFLAGS = -I$(top_srcdir)/src/ngui @AM_CXXFLAGS@ $(sdl2_CFLAGS) $(SDL2_ttf_CFLAGS)
AM_CFLAGS = -I$(top_srcdir)/src/ngui @AM_CXXFLAGS@ $(sdl2_CFLAGS) $(SDL2_ttf_CFLAGS)


###############################################################################
# THE LIBRARIES TO BUILD
# ###############################################################################
#
# the library names to build (note we are building static libs only)
lib_LTLIBRARIES = libngui.la

# where to install the headers on the system
libngui_adir = $(includedir)/ngui

# the list of header files that belong to the library (to be installed later)
libngui_a_HEADERS = \
					fontmap_static.h \
					ngui_button.h \
					ngui_flowbox.h \
					ngui.h \
					ngui_info_prompt.h \
					ngui_stringselect.h \
					ngui_textbox.h \
					ngui_textlabel.h \
					nsdl.h \
					nunifont.h \
					uthash.h \
					widthmap_static.h

# the sources to add to the library and to add to the source distribution
libngui_la_SOURCES = \
					$(libheaders_a_HEADERS) \
					ngui_button.cpp \
					ngui.cpp \
					ngui_flowbox.cpp \
					ngui_info_prompt.cpp \
					ngui_scrollbar.cpp \
					ngui_stringselect.cpp \
					ngui_textbox.cpp \
					ngui_textlabel.cpp \
					nsdl.cpp \
					nunifont.cpp

# the following program seems to be 'broken'
#noinst_PROGRAMS = unifont_conv
#unifont_conv_SOURCES = unifont_conv.c

pkgconfigdir = $(libdir)/pkgconfig
nodist_pkgconfig_DATA = libngui.pc

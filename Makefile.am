ACLOCAL_AMFLAGS = -I m4
SUBDIRS = src/ngui

BUILT_SOURCES = $(top_srcdir)/.version
$(top_srcdir)/.version:
	echo $(VERSION) > $@-t && mv $@-t $@

dist-hook:
	echo $(VERSION) > $(distdir)/.tarball-version
	sh $(top_srcdir)/build-aux/generate-ChangeLog $(top_srcdir) $(distdir)

MAINTAINERCLEANFILES = Makefile.in aclocal.m4 build-aux/compile \
					   build-aux/config.guess build-aux/config.sub build-aux/depcomp \
					   build-aux/install-sh build-aux/ltmain.sh build-aux/missing \
					   config.h.in config.h.in~ configure m4/libtool.m4 m4/ltoptions.m4 \
					   m4/ltsugar.m4 m4/ltversion.m4 m4/lt~obsolete.m4 \
					   src/ngui/Makefile.in

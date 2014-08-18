ACLOCAL_AMFLAGS = -I m4
SUBDIRS = src/ngui

BUILT_SOURCES = $(top_srcdir)/.version
$(top_srcdir)/.version:
	echo $(VERSION) > $@-t && mv $@-t $@

dist-hook:
	echo $(VERSION) > $(distdir)/.tarball-version
	sh $(top_srcdir)/build-aux/generate-ChangeLog $(top_srcdir) $(distdir)
	sh $(top_srcdir)/build-aux/update-debian-changelog debian/changelog $(VERSION)

MAINTAINERCLEANFILES = Makefile.in aclocal.m4 build-aux/compile \
					   build-aux/config.guess build-aux/config.sub build-aux/depcomp \
					   build-aux/install-sh build-aux/ltmain.sh build-aux/missing \
					   config.h.in config.h.in~ configure m4/libtool.m4 m4/ltoptions.m4 \
					   m4/ltsugar.m4 m4/ltversion.m4 m4/lt~obsolete.m4 \
					   compile config.guess config.sub depcomp install-sh missing ltmain.sh \
					   ar-lib src/ngui/Makefile.in

if BUILDING_DEB
DEBSOURCEPKG=$(PACKAGE)_$(VERSION).orig.tar.gz
DEBSOURCEDIR=$(PACKAGE)-$(VERSION)
deb: dist
	@$(ECHO) "Building Debian package..."; \
		if $(TEST) ! -d debian; then \
		$(ECHO) "The files needed for building a Debian package are not" \
		"included by default in the distribution. To build a package, check" \
		"out the project from source control."; \
		exit 1; \
		fi; \
		$(MV) $(PACKAGE)-$(VERSION).tar.gz $(DEBSOURCEPKG) && \
		$(TAR) --extract --gunzip --file $(DEBSOURCEPKG) && \
		$(MKDIR_P) $(DEBSOURCEDIR)/debian && \
		$(CP) \
		debian/compat \
		debian/changelog \
		debian/control \
		debian/copyright \
		debian/docs \
		debian/rules \
		debian/ngui.dirs \
		debian/ngui.install \
		debian/ngui-dev.dirs \
		debian/ngui-dev.install \
		$(DEBSOURCEDIR)/debian && \
		cd $(DEBSOURCEDIR) && \
		$(DEBUILD) -rfakeroot -D -us -uc; \
		cd $(srcdir); \
		rm --force $(DEBSOURCEPKG); \
		rm --recursive --force $(DEBSOURCEDIR)
else
deb:
	@$(ECHO) \
	"To build a Debian package, you must run configure with --enable-deb."; \
	exit 1
endif


EXTRA_DIST = \
	build-aux/update-debian-changelog

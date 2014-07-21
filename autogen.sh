#!/bin/bash
autoreconf -fi
autoheader
touch NEWS README AUTHORS ChangeLog
automake --add-missing
#rm -rf autom4te.cache

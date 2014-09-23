#!/bin/sh
usage() {
       echo "usage: bump-version <version-id>"
}
echo v$(date +%Y%m%d)

#if [ $# -ne 1 ]; then
#       usage
#       exit 1
#fi


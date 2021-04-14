#!/bin/bash
set -e

# Sync executable
bn=$(basename $1)
rpiaddr="10.0.0.110"

rsync -az $1/*.ko "pi@$rpiaddr:/home/pi/projects/laboratoire4/"


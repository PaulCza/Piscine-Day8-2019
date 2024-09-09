#!/bin/sh

find . -name "*.c" -type f -exec egrep -l " +$" {} \;
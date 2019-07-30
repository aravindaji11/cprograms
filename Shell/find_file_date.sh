#!/bin/bash
echo Enter the location.
read a
echo Enter the last modified date.
read b
cd $a
find . -type f -mtime -$b

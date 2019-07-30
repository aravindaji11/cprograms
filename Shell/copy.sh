#!/bin/bash
touch ~/Desktop/test.txt
echo "Where do you want to copy the file?"
read location
cp ~/Desktop/test.txt "$location"
echo Done..!
cd $location
pwd
ls


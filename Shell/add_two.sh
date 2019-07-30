#!/bin/bash

echo Enter the two numbers:
read a
read b
c=$( expr $a + $b )
echo $c


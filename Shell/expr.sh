#!/bin/bash

#basic arithmetic

a=$( expr 5 + 4 )
b=$( expr 5 \* $1 )
c=$( expr 10 - 3 )
echo $a $b $c

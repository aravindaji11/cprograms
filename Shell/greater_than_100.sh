#!/bin/bash

echo The number is $1.

if [ $1 -lt 100 ];
then
	echo Number is less than 100.
else
	echo Number is greater than 100.
fi


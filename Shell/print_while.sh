#!/bin/bash

echo Enter the number:
read n
while [ $n != 0 ]
do
	echo $n
	let "n = $n - 1"
done


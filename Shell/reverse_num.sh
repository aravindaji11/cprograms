#!/bin/bash

echo Enter the number:
read n
reversed=0
while [ $n != 0 ]
do
	let "rem = $n % 10"
	reversed=$(($reversed * 10 + $rem))
	let "n /= 10"
done

echo $reversed



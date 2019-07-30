#!/bin/bash

#sum of n numbers using while.

echo Enter the number.
read num
sum=0
i=1
while [ $i -le $num ]
do
	sum=$(($sum + $i))
	i=$(($i+1))
done
echo Sum is $sum.

#!/bin/bash

#double parantheses

a=$(( 4 + 5 ))

echo $a

((a++))

echo $a

(( a +=5 ))
echo $a

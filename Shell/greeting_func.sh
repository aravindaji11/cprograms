#!/bin/bash
echo Enter your name:
read name
greeting ()
{
	local name=$1
	echo "Hello $name"
}

greeting $name.

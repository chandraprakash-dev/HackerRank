#!/bin/bash
while read line
do
a=("${a[@]}" $line)
done
echo ${a[3]}

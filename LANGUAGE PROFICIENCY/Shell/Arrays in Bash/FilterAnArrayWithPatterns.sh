#!/bin/bash
while read line
do
a=("${a[@]}" $line)
done
b=(${a[@]/*[aA]*/})
echo ${b[@]}

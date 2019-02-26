#!/bin/bash
i = 1
while read line
do
a=("${a[@]}" $line)
((i+=1))
done
echo $i

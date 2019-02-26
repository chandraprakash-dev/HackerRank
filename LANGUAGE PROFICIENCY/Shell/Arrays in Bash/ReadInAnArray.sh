#!/bin/bash
i=0
while read line
do
a[$i]=$line
((i+=1))
done
echo ${a[@]}

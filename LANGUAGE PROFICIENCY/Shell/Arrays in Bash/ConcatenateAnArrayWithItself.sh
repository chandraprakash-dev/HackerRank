#!/bin/bash
for line in `cat`; do
a=("${a[@]}" $line)
done
b=("${a[@]}" "${a[@]}" "${a[@]}")
echo ${b[@]}

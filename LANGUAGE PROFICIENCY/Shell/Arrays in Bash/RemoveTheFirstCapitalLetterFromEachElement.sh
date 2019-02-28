#!/bin/bash
for line in `cat`; do
a=("${a[@]}" $line)
done
echo ${a[@]/[A-Z]/.}

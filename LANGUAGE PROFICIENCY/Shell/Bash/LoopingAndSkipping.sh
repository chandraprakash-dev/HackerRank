#!/bin/bash
for n in {1..99}
  do
    if (($n % 2 != 0)); then 
      echo $n 
    fi
  done



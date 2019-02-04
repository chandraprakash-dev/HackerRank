#!/bin/bash
read i
if [[ "$i" = 'y' ||  "$i" = 'Y' ]]; then 
  echo "YES"
elif [[ "$i" = 'n' || "$i" = 'N' ]]; then
  echo "NO"
fi


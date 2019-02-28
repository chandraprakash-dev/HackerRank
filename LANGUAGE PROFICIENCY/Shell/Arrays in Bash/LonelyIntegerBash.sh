#!/bin/bash
read n
arr=($(cat))
arr=${arr[*]}
echo $((${arr// /^}))

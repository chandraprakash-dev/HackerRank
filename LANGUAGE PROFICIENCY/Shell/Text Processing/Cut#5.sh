#!/bin/bash
cut -d$'\t' -f1,2,3 "${1:-/dev/stdin}"


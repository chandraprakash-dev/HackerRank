#!/bin/bash
read e
printf "%.3f" $(echo "$e" | bc -l)

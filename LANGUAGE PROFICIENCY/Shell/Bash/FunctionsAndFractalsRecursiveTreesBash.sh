#!/bin/bash
declare -A matrix
num_rows=63
num_columns=100

declare -a roots
roots[0]=50

for ((i=1;i<=num_rows;i++)) do
    for ((j=1;j<=num_columns;j++)) do
        matrix[$i,$j]='_'
    done
done

read n
j=63
len=16
for ((i=1; i<=n; i++)) do
    lim=$((${#roots[@]}-1))
    elems=${#roots[@]}
    old_j=$j
    for((k=0; k<=lim; k++)) do
        pos=${roots[$k]}
        #print the trunk
        for((m=0; m<=len-1; m++)) do
            matrix[$j,$pos]='1'
            ((j--))
        done
        #print the branches
        for((m=1; m<=len; m++)) do
            matrix[$j,$((pos-m))]='1'
            matrix[$j,$((pos+m))]='1'
            ((j--))
        done
        roots=("${roots[@]}" "$((pos-m+1))" "$((pos+m-1))" )
        if (( $k < $lim ))
        then
            j=$old_j
        fi
    done
    for((k=0; k<$elems; k++)) do
        unset roots[$k]
    done
    roots=( "${roots[@]}" )
    len=$((len/2))
done

# print the matrix
for ((i=1;i<=num_rows;i++)) do
    for ((j=1;j<=num_columns;j++)) do
        printf ${matrix[$i,$j]}
    done
    printf "\n"
done



#!/bin/bash 

if test ! -f file; then
    echo 0 > file
fi

n=228
for i in $(seq $n)
do
    num=`tail -1 file`
    num=$(($num+1))
    
    echo $num >> file
done

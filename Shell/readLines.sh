#! /bin/bash
count=1
while read line
do
    if [ $count -eq 10 ]; then
        echo "$line"
    fi
    count=`expr $count + 1`
done <file.txt

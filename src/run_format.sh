#!/bin/sh

LOGS=`find ../build/log_chifoumi2017*.*`
rm -f ../build/data.csv
for log in $LOGS
do
    tail -n +4 $log |sed 's/^.*play ; //' >> ../build/data.csv 
    

done

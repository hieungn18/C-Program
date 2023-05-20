#!/bin/bash
#
#

echo -n "Enter the value of n: "
read value
echo -n "First $value prime numbers are: "
echo -n "2 "
a=0
count=1


for((i=3;$count<value;))
do

        for((j=i-1;j>=2;))
        do

                if [ `expr $i % $j` -ne 0 ] ; 
                 then
                        a=1
                else
                        a=0
                break

                fi

                        j=`expr $j - 1`
        done

                if [ $a -eq 1 ] ; 
                then
                echo -n "$i "
                count=`expr $count + 1`
                fi
                i=`expr $i + 1`

done
echo    

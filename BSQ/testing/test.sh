#!/bin/sh
while true
do
./generate.pl $((RANDOM % 100)) $((RANDOM % 30)) 3 > test.txt
cat test.txt
echo
.././bsq test.txt
echo
echo "------------------------------------------"
echo
sleep 1
done

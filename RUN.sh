#!/bin/sh
#
# testing script for student to compare output with provided example outputs.
#
# Student: execute this script to compare your output with provided examples.

echo "There should be no output from the diff call."

for f in 1 2 3 4
do
	echo Running test $f
	./queue_test$f      > out.$f
	echo diff qtest$f.out out.$f
	diff qtest$f.out out.$f
done

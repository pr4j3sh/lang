#!/bin/bash

# declaration
num=5
str=abc
MSG='hello    world'
CMD=$(ls)

# referencing

echo "number is $num"
echo "string is ${str}"
echo "message with whitespace $MSG"
echo message without whitespace $MSG
echo "passing output of ls -> ${CMD}"

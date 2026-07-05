#!/bin/bash

# strings
first="hello"
second="world"
msg="$first $second!"
echo "msg: $msg"

# numbers
num=2
echo $num

# arrays
cars=("beemer", "benz", "mclaren")
echo ${cars[2]}

# associative arrays (similar to dict)
declare -A weather
weather[june]="summer"
weather[december]="winter"
unset weather[june]
echo ${weather[december]}

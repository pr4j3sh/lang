#!/bin/bash

echo "num of args -> ${#}"
echo "arg 0 -> ${0}"
echo "arg 1 -> ${1}"
echo "arg 2 -> ${2}"
# treats qouted args differently
echo "all args using @ -> ${@}"
# treats quoted args as one -> concatenates them
echo "all args using * -> ${*}"

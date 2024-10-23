#!/bin/bash

arr=(zero "one" "two 2")

echo "size of arr ${#arr[@]}"
echo "arr[0] -> ${arr[0]}"
echo "arr[1] -> ${arr[1]}"
echo "arr[2] -> ${arr[2]}"

arr[4]="four"

echo "arr[3] -> ${arr[3]}"
echo "arr[4] -> ${arr[4]}"

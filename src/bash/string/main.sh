#!/bin/bash

STR="this is a string"

echo "size of str -> ${#STR}"

SUBSTR="hat"

IDX=$(expr index "$STR" "$SUBSTR")

echo "$IDX"

# string replacement
STRING="to be or not to be"
# first occurence
echo "${STRING[@]/be/eat}"
# all occurences
echo "${STRING[@]//be/eat}"
# replace at beginning
echo "${STRING[@]/#to be/eat now}"
# replace at end
echo "${STRING[@]/%be/eat}"

# delete all occurences
echo "${STRING[@]// not/}"

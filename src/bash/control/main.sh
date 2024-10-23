#!/bin/bash

num=$1

if [ "$num" = 2 ]; then
  echo "$num"
elif [ "$num" = 3 ]; then
  echo "$num"
else
  echo "nah"
fi

case $num in
1) echo "you selected bash" ;;
2) echo "you selected cpp" ;;
3) echo "you selected python" ;;
esac

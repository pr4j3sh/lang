#!/bin/bash

num=11

# if-else
if [ "$num" -gt 0 ]; then
  echo "positive"
  if [ $num -gt 10 ]; then
    echo "greater than 10"
  fi
elif [ "$num" -lt 0 ]; then
  echo "negative"
else
  echo "zero"
fi

# case
case $num in
0)
  echo "zero"
  ;;
*)
  echo "non-zero"
  ;;
esac

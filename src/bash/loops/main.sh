#!/bin/bash

# for loop
for i in {1..5}; do
  echo "iter $i"
done

# while loop
i=1
while [ "$i" -le 5 ]; do
  echo "iter $i"
  ((i++))
done

# until loop
i=1
until [ "$i" -gt 5 ]; do
  echo "iter $i"
  ((i++))
done

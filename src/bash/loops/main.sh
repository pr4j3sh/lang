#!/bin/bash

arr=(1 2 3 4)

for i in "${arr[@]}"; do
  echo "$i"
done

i=0
while [ $i -lt 4 ]; do
  echo "${arr[i]}"
  i=$((i + 1))
done

i=0
until [ $i -gt 4 ]; do
  echo "${arr[i]}"
  i=$((i + 1))
done

for i in {1..10}; do
  if [ "$i" = 5 ]; then
    break
  fi
  echo "$i"
done

for i in {1..10}; do
  if [ "$i" = 5 ]; then
    continue
  fi
  echo "$i"
done

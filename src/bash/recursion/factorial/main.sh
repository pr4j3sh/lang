#!/bin/bash

factorial() {
  if [ "$1" -eq 1 ]; then
    echo 1
    return
  fi
  local res=$(factorial $(("$1" - 1)))
  echo $(($1 * res))
}

factorial 3

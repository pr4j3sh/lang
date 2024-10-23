#!/bin/bash

STR=$1
POS=$2
LEN=$3
SUBSTR=${STR:$POS:$LEN}

echo "${SUBSTR}"

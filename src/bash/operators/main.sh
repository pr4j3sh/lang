#!/bin/bash

# comparison operators
echo "comparison operators"
declare -A comparison_operators
comparison_operators["equal_to"]='-eq'
comparison_operators["not_equal_to"]='-ne'
comparison_operators["less_than"]='-lt'
comparison_operators["less_than_or_equal_to"]='-le'
comparison_operators["greater_than"]='-gt'
comparison_operators["greater_than_or_equal_to"]='-ge'

for i in ${comparison_operators[@]}; do
  echo $i
done

# string operators
echo "string operators"
declare -A string_operators
string_operators["equal_to"]='=='
string_operators["not_equal_to"]='!=='
string_operators["less_than"]='<'
string_operators["greater_than"]='>'

for i in ${string_operators[@]}; do
  echo $i
done

# arithmetic operators
echo "arithmetic operators"
declare -A arithmetic_operators
arithmetic_operators["addition"]='+'
arithmetic_operators["subtraction"]='-'
arithmetic_operators["multiplication"]='*'
arithmetic_operators["division"]='/'
arithmetic_operators["modulus"]='%'

for i in ${arithmetic_operators[@]}; do
  echo $i
done

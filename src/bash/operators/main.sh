#!/bin/bash

# comparison operators
printf '%s\n' "comparison operators"
declare -A comparison_operators
comparison_operators["equal_to"]='-eq'
comparison_operators["not_equal_to"]='-ne'
comparison_operators["less_than"]='-lt'
comparison_operators["less_than_or_equal_to"]='-le'
comparison_operators["greater_than"]='-gt'
comparison_operators["greater_than_or_equal_to"]='-ge'

for i in "${comparison_operators[@]}"; do
  printf '%s\n' "$i"
done

# string operators
printf '%s\n' "string operators"
declare -A string_operators
string_operators["equal_to"]='='
string_operators["not_equal_to"]='!='
string_operators["less_than"]='<'
string_operators["greater_than"]='>'

for i in "${string_operators[@]}"; do
  printf '%s\n' "$i"
done

# arithmetic operators
printf '%s\n' "arithmetic operators"
declare -A arithmetic_operators
arithmetic_operators["addition"]='+'
arithmetic_operators["subtraction"]='-'
arithmetic_operators["multiplication"]='*'
arithmetic_operators["division"]='/'
arithmetic_operators["modulus"]='%'

for i in "${arithmetic_operators[@]}"; do
  printf '%s\n' "$i"
done

# logical operators
printf '%s\n' "logical operators"
declare -A logical_operators
logical_operators["and"]='&&'
logical_operators["or"]='||'
logical_operators["not"]='!'

for i in "${logical_operators[@]}"; do
  printf '%s\n' "$i"
done

# file test operators
printf '%s\n' "file test operators"
declare -A file_test_operators
file_test_operators["file_exists"]='-e'
file_test_operators["dir_exists"]='-d'
file_test_operators["file_is_regular"]='-f'
file_test_operators["file_is_readable"]='-r'
file_test_operators["file_is_writable"]='-w'
file_test_operators["file_is_executable"]='-x'
file_test_operators["file_not_empty"]='-s'

for i in "${file_test_operators[@]}"; do
  printf '%s\n' "$i"
done

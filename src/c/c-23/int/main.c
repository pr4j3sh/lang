// in the bginning it was all integers, so non-declared data type were default
// to int, however this is now removed
#include <stdio.h>
void print_sum(a, b) { printf("%d", a + b); }

int main(int argc, char *argv[]) {
  print_sum(1.5, 8.5);
  return 0;
}

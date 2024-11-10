#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  // formula to print range, given size
  int bits = 8;
  printf("bits - > %d\n", bits);

  int bytes = bits / 8;
  printf("bytes - > %d\n", bytes);
  int low = 0;
  int high = (int)pow(2, bits) - 1;
  printf("unsigned - > %d - %d\n", low, high);
  int slow = -1 * (high + 1) / 2;
  int shigh = ((high + 1) / 2) - 1;
  printf("signed - > %d - %d\n", slow, shigh);
  return 0;
}

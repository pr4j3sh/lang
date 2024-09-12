#include <stdio.h>

float convert(int i) { return ((5 / 9.0) * (i - 32)); }

int main() {
  for (int i = 0; i <= 300; i += 20) {
    printf("%d\t%f\n", i, convert(i));
  }
  return 0;
}

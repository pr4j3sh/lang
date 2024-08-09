#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
  int fahr, cel;
  for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    printf("%3d\t%3.0f\n", fahr, (5.0 / 9) * (fahr - 32));
  }
  return 0;
}

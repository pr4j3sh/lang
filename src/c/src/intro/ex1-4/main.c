#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
  int fahr, cel;

  printf("Celcius to Fahrenheit Conversion\n");

  for (cel = LOWER; cel <= UPPER; cel += STEP) {
    printf("%3d\t%3.0f\n", cel, (cel / (5.0 / 9)) + 32);
  }
  return 0;
}

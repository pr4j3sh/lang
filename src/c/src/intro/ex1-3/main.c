#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
  int fahr, cel;

  printf("Fahrenheit to Celcius Conversion\n");

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    printf("%3d\t%3.0f\n", fahr, (5.0 / 9) * (fahr - 32));
  }
  return 0;
}

#include <stdio.h>

int main() {
  const int START = 0, END = 300, GAP = 20;
  printf("Fahreheit to Celcius\n");
  for (int i = START; i <= END; i += GAP) {
    printf("%3d %6.1f\n", i, ((5 / 9.0) * (i - 32)));
  }
  return 0;
}

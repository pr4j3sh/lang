#include <stdio.h>

#define START 0
#define END 300
#define GAP 20

int main() {
  for (int i = START; i <= END; i += GAP) {
    printf("%3d %6.1f\n", i, ((5 / 9.0) * (i - 32)));
  }
  return 0;
}

#include <stdio.h>

int main() {
  int c;
  printf("%d\n", (c = getchar()) != EOF);
  return 0;
}

#include <stdio.h>

int main(void) {
  int c, count = 0;

  while ((c = getchar()) != EOF) {
    count++;
  }

  printf("%d\n", count);

  return 0;
}

#include <stdio.h>

int main() {
  long wc = 0;

  while (getchar() != EOF)
    wc++;

  printf("%ld\n", wc);
  return 0;
}

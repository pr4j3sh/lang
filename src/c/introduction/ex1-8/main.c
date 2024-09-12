#include <stdio.h>

int main(void) {
  int c, bc = 0, tc = 0, lc = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      bc++;
    if (c == '\t')
      tc++;
    if (c == '\n')
      lc++;
  }
  printf("%d\t%d\t%d\n", bc, tc, lc);

  return 0;
}

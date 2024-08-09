#include <stdio.h>

int main() {
  int lc = 0, wc = 0, cc = 0, c;

  while ((c = getchar()) != 'q') {
    if (c == '\n')
      lc++;
    cc++;
  }

  printf("lc: %d\nwc: %d\ncc: %d\n", lc, wc, cc);
  return 0;
}

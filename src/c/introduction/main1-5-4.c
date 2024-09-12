#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c, lc = 0, wc = 0, cc = 0, flag = OUT;
  while ((c = getchar()) != EOF) {
    cc++;

    if (c == '\n') {
      lc++;
    }

    if (c == ' ' || c == '\t' || c == '\n') {
      flag = OUT;
    } else if (flag == OUT) {
      flag = IN;
      wc++;
    }
  }
  printf("%d\t%d\t%d", lc, wc, cc);
  return 0;
}

#include <stdio.h>

int main() {
  int lc = 0, wc = 0, cc = 0, c;
  int flag = 0;
  while ((c = getchar()) != 'q') {
    if (c == '\n')
      lc++;
    if (c == ' ' || c == '\t' || c == '\n')
      flag = 0;
    else if (flag == 0) {
      flag = 1;
      wc++;
    }
    cc++;
  }

  printf("lc: %d\nwc: %d\ncc: %d\n", lc, wc, cc);
  return 0;
}

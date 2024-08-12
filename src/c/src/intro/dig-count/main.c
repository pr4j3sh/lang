#include <stdio.h>

int main() {
  int c, wc, oc;
  int dig[10];

  for (int i = 0; i < 10; i++) {
    dig[i] = 0;
  }

  while ((c = getchar()) != 'q') {
    if (c >= '0' && c <= '9')
      dig[c - '0']++;
    else if (c == ' ' || c == '\t' || c == '\n')
      wc++;
    else
      oc++;
  }

  printf("digits =\n");
  for (int i = 0; i < 10; i++) {
    printf("%d -> %d\n", i, dig[i]);
  }

  printf("\nwhite spaces = %d\nother chars = %d\n", wc, oc);

  return 0;
}

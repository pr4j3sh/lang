#include <stdio.h>

#define OUT 0
#define IN 1

int main() {
  int arr[1000] = {0}, c, wc = 0, cc = 0, i = 0, flag = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      arr[i] = cc;
      i++;
      cc = 0;
    } else {
      cc++;
    }
    if (c == ' ' || c == '\t' || c == '\n') {
      flag = OUT;
    } else if (flag == OUT) {
      flag = IN;
      wc++;
    }
  }

  for (int j = 0; j < wc; j++) {
    for (int k = 0; k < arr[j]; k++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

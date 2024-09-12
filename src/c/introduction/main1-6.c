#include <stdio.h>

int main() {
  int arr[10] = {0}, c, wc = 0, oc = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      wc++;
    } else if (c >= '0' && c <= '9') {
      arr[c - '0']++;
    } else {
      oc++;
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\t", arr[i]);
  }

  printf("\n");

  printf("%d\t%d\n", wc, oc);

  return 0;
}

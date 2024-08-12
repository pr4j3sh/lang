#include <stdio.h>

int main() {
  int c, flag = 0;
  while ((c = getchar()) != 'q') {
    if (c == ' ') {
      flag = 1;
    }
    if (flag == 1) {
      flag = 0;
      printf("\n");
    } else {
      putchar(c);
    }
  }
  return 0;
}

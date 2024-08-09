#include <stdio.h>

int main() {
  int c, flag = 0;

  while ((c = getchar()) != EOF) {
    if (flag == 1) {
      if (c != ' ') {
        flag = 0;
        putchar(c);
      }
    } else if (c == ' ') {
      flag = 1;
      putchar(c);
    } else {
      putchar(c);
    }
  }
  return 0;
}

#include <stdio.h>

int main(void) {
  int c, bc = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      bc++;
    }

    if (c != ' ') {
      bc = 0;
      putchar(c);
    } else if (bc == 1) {
      putchar(c);
    }
  }

  return 0;
}

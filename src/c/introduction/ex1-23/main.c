#include <stdio.h>

int main() {
  int c, cms = 0, cs = 0;
  while ((c = getchar()) != EOF) {
    if (c == '/') {
      // comment might start
      // set a flag for this
      cms = 1;
    }

    if (c == '/' && cms == 1) {
      // comment started
      // do not print anything until '\n'
      cms = 0;
      cs = 1;
    }

    if (cs == 1) {
      if (c == '\n') {
        cs = 0;
      }
    }

    if (cs == 0) {
      putchar(c);
    }
  }
  return 0;
}

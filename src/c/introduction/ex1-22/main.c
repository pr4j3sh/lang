#include <stdio.h>

#define MAX 20

int main() {
  int c, pos = 0, last = -1;
  char buf[MAX];
  while ((c = getchar()) != EOF) {
    buf[pos] = c;
    pos++;

    if (c == ' ' || c == '\t') {
      last = pos;
    }

    if (pos >= MAX) {
      if (last != -1) {
        for (int j = 0; j < last; j++) {
          putchar(buf[j]);
        }
        putchar('\n');

        for (int j = last; j < pos; j++) {
          buf[j - last] = buf[j];
        }
        pos -= last;
        last = -1;
      } else {
        for (int j = 0; j < pos; j++) {
          putchar(buf[j]);
        }
        putchar('\n');
        pos = 0;
      }
    }
  }

  if (pos > 0) {
    for (int j = 0; j < pos; j++) {
      putchar(buf[j]);
    }
  }
  return 0;
}

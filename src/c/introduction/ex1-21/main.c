#include <stdio.h>

int main() {
  int c, count = 0, pos = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      count++;
      pos++;
      if (pos % 4 == 0) {
        putchar('\t');
        count = 0;
      }
    } else {
      for (int i = 0; i < count; i++) {
        putchar(' ');
      }
      putchar(c);
      if (c == '\n') {
        pos = 0;
      } else {
        pos++;
      }
      count = 0;
    }
  }
  return 0;
}

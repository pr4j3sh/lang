#include <stdio.h>

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
    putchar('\n');
  }
  return 0;
}

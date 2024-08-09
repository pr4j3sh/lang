#include <stdio.h>

int main() {
  long bc = 0, tc = 0, nc = 0;
  int c;
  while ((c = getchar()) != EOF)
    if (c == ' ')
      bc++;
    else if (c == '\t')
      tc++;
    else if (c == '\n')
      nc++;

  printf("blanks: %ld\ntabs: %ld\nnewlines: %ld\n", bc, tc, nc);
  return 0;
}

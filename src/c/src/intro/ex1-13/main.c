#include <stdio.h>

int main() {
  int c, i = 0, flag = 0, len = 0;
  int mem[3] = {0};
  while ((c = getchar()) != 'q') {
    if (c == ' ' || c == '\n') {
      mem[i] = len;
      i++;
      len = 0;
    } else {
      len++;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < mem[i]; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}

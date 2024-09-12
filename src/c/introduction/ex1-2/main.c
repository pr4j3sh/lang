#include <stdio.h>

int main() {
  printf("hello, world\c");
  return 0;
}

/*
❯ cc -o main main.c
main.c: In function ‘main’:
main.c:4:26: warning: unknown escape sequence: '\c'
    4 |   printf("hello, world\c");
      |                          ^
*/

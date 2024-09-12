#include <stdio.h>

int main() { printf("hello, world\n") return 0; }

/*
❯ cc -o main3 main3.c
main3.c: In function ‘main’:
main3.c:3:38: error: expected ‘;’ before ‘return’
    3 | in() { printf("hello, world\n") return 0; }
      |                                ^~~~~~~
      |                                ;
*/

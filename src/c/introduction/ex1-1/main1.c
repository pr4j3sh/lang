int main() {
  printf("hello, world");
  return 0;
}

/*
❯ cc -o main1 main1.c
main1.c: In function ‘main’:
main1.c:2:3: error: implicit declaration of function ‘printf’
[-Wimplicit-function-declaration] 2 |   printf("hello, world"); |   ^~~~~~
main1.c:1:1: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
  +++ |+#include <stdio.h>
    1 | int main() {
main1.c:2:3: warning: incompatible implicit declaration of built-in function
‘printf’ [-Wbuiltin-declaration-mismatch] 2 |   printf("hello, world"); | ^~~~~~
main1.c:2:3: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
*/

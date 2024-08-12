#include <stdio.h>

int main() {
  char arr[100];
  char *p = arr;
  int n = arr + 100 - p;
  printf("%d", n);

  return 0;
}

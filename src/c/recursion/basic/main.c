#include <stdio.h>

void print_numbers(int n) {
  if (n == 0) {
    return;
  }
  printf("%d\n", n);
  print_numbers(n - 1);
}

int main(int argc, char *argv[]) {
  printf("Recursion\n");
  print_numbers(5);

  return 0;
}

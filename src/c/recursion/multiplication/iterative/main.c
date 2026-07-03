#include <stdio.h>

int mult(int a, int b) {
  int ans = 0;
  for (int i = 0; i < b; i++) {
    ans = ans + a;
  }
  return ans;
}

int main(int argc, char *argv[]) {
  int a = 2, b = 3;
  int ans = mult(a, b);
  printf("%d\n", ans);
  return 0;
}

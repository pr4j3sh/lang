#include <stdio.h>

int mult(int a, int b) {
  if (a == 0 || b == 0) {
    return 0;
  }
  if (b == 1) {
    return a;
  }
  int ans = a + mult(a, b - 1);
  return ans;
}
int main(int argc, char *argv[]) {
  int a = 2, b = 3;
  int ans = mult(a, b);
  printf("%d\n", ans);
  return 0;
}

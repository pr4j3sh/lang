#include <stdio.h>

int power(int m, int n);

int main() {
  int m = 2, n = 2;
  printf("%d", power(m, n));
  return 0;
}

int power(int m, int n) {
  int ans = 1;
  for (int i = 0; i < n; i++) {
    ans *= m;
  }
  return ans;
}

#include <iostream>
using namespace std;

// TC - O(n)

int main(int argc, char *argv[]) {
  int n = 10, a = 0, b = 1, c = 0;
  for (int i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  cout << c << endl;
  return 0;
}

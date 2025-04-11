#include <iostream>
using namespace std;

int f(int n) {
  if (n == 0)
    return 1;

  return n * f(n - 1);
}

int main(int argc, char *argv[]) {
  cout << f(3) << endl;
  return 0;
}

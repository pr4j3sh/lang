#include <iostream>
using namespace std;

// parameterised
// int sum(int n, int &s) {
//   if (n == 0)
//     return 0;
//   s += n;
//   return sum(n - 1, s);
// }

int sum(int n) {
  if (n == 0)
    return 0;

  return n + sum(n - 1);
}

int main(int argc, char *argv[]) {
  // int s = 0;
  // sum(3, s);
  // cout << s << endl;
  cout << sum(10) << endl;
  return 0;
}

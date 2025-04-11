#include <iostream>
using namespace std;

// higher to lower
// n -> 1
// void print(int n) {
//   if (n == 0)
//     return;
//   cout << n << "-> sup" << endl;
//   print(n - 1);
// }

// higher to lower
// 1 -> n
// void print(int n) {
//   if (n == 0)
//     return;
//   print(n - 1);
//   cout << n << "-> sup" << endl;
// }

// lower to higher
void print(int i) {
  if (i > 10)
    return;
  cout << i << " -> hey" << endl;
  print(i + 1);
}

int main(int argc, char *argv[]) {
  // print(10);
  print(1);
  return 0;
}

#include <algorithm>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  string s = "cczazcc";

  do {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));

  return 0;
}

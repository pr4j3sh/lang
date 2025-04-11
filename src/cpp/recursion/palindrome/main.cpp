#include <iostream>
using namespace std;

bool check(int i, string &s, int n) {
  if (i >= n / 2)
    return true;

  if (s[i] != s[n - 1 - i])
    return false;

  return check(i + 1, s, n);
}

int main(int argc, char *argv[]) {
  string s = "madama";
  cout << check(0, s, s.size()) << endl;
  return 0;
}

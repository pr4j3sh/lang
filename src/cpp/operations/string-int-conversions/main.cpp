#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

  // char to int
  int num = '4' - '0';
  cout << "char to int: '4' -> " << num << endl;

  // int to char
  char ch = 4 + '0';
  cout << "int to char: 4 -> '" << ch << "'" << endl;

  // string to int
  int n = atoi("11");
  cout << "string to int: \"11\" -> " << n << endl;

  // int to string
  string s = to_string(11);
  cout << "int to string: 11 -> \"" << s << "\"" << endl;

  return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  int n = 3;
  vector<string> str;

  for (int i = 0; i < n; i++) {
    if (i == 0) {
      str.push_back("0");
      str.push_back("1");
      continue;
    }
    vector<string> s = str;
    for (int j = 0; j < s.size(); j++) {
      str.push_back(s[j] + "0");
      if (s[j][s[j].size() - 1] != '1') {
        str.push_back(s[j] + "1");
      }
    }
  }

  for (auto i : str) {
    cout << i << endl;
  }
  return 0;
}

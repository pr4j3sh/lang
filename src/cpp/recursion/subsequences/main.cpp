#include <iostream>
#include <vector>
using namespace std;

void print(int i, vector<int> &v, vector<int> &ans) {
  if (i >= 5) {
    for (auto i : ans) {
      cout << i << " ";
    }
    cout << endl;
    return;
  }
  ans.push_back(v[i]);
  print(i + 1, v, ans);
  ans.pop_back();
  print(i + 1, v, ans);
}

int main(int argc, char *argv[]) {
  vector<int> v = {1, 2, 3, 4, 5};
  vector<int> ans;
  print(0, v, ans);
  return 0;
}

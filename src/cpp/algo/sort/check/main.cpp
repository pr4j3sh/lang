#include <iostream>
#include <vector>
using namespace std;

bool is_sort(vector<int> &v) {
  int n = v.size();
  for (int i = 0; i < n; i++) {
    if (i != 0 && v[i] < v[i - 1]) {
      return false;
    }
  }
  return true;
}

int main(int argc, char *argv[]) {
  vector<int> v = {1, 2, 3, 4, 0};
  cout << is_sort(v);
  return 0;
}

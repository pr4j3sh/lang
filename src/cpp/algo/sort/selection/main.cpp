#include <climits>
#include <iostream>
#include <vector>
using namespace std;

void disp(vector<int> &v) {
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;
}

void asc(vector<int> &v) {
  int n(v.size());
  for (int i = 0; i < n; i++) {
    int shortest = INT_MAX, idx = i;
    for (int j = i; j < n; j++) {
      if (v[j] < shortest) {
        shortest = v[j];
        idx = j;
      }
    }
    swap(v[i], v[idx]);
  }
}

void desc(vector<int> &v) {
  int n(v.size());
  for (int i = 0; i < n; i++) {
    int largest = INT_MIN, idx = i;
    for (int j = i; j < n; j++) {
      if (v[j] > largest) {
        largest = v[j];
        idx = j;
      }
    }
    swap(v[i], v[idx]);
  }
}

int main(int argc, char *argv[]) {
  vector<int> v = {7, 12, 13, 4, 8, 3};
  disp(v);
  asc(v);
  disp(v);
  desc(v);
  disp(v);
  return 0;
}

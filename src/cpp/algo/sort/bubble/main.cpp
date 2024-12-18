#include <iostream>
#include <vector>

using namespace std;

void asc(vector<int> &v) {
  int n(v.size());
  for (int i = 0; i < n; i++) {
    bool swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (v[j] > v[j + 1]) {
        swap(v[j], v[j + 1]);
        swapped = true;
      }
    }
    if (!swapped)
      break;
  }
}

void desc(vector<int> &v) {
  int n(v.size());
  for (int i = 0; i < n; i++) {
    bool swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (v[j] < v[j + 1]) {
        swap(v[j], v[j + 1]);
        swapped = true;
      }
    }
    if (!swapped)
      break;
  }
}

void disp(vector<int> &v) {
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  vector<int> v = {4, 3, 6, 8, 9, 1, 2, 5, 7};

  disp(v);
  asc(v);
  disp(v);
  desc(v);
  disp(v);

  return 0;
}

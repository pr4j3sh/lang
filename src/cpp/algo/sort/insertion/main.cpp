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
  int n = v.size();

  for (int i = 1; i < n; i++) {
    int key = v[i];
    int j = i - 1;

    for (; j >= 0 && v[j] > key; j--) {
      v[j + 1] = v[j];
    }
    v[j + 1] = key;
  }
}

void desc(vector<int> &v) {
  int n = v.size();

  for (int i = 1; i < n; i++) {
    int key = v[i];
    int j = i - 1;

    for (; j >= 0 && v[j] < key; j--) {
      v[j + 1] = v[j];
    }
    v[j + 1] = key;
  }
}

int main(int argc, char *argv[]) {

  vector<int> v = {13, 12, 9, 11, 3};

  disp(v);
  asc(v);
  disp(v);
  desc(v);
  disp(v);

  return 0;
}

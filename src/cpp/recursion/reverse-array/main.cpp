#include <iostream>
using namespace std;

void rev(int (&arr)[5], int l, int r) {
  if (l >= r)
    return;

  swap(arr[l], arr[r]);

  rev(arr, l + 1, r - 1);
}

int main(int argc, char *argv[]) {
  int arr[5] = {1, 2, 3, 4, 5};
  rev(arr, 0, 4);
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
  }
  return 0;
}

#include <iostream>
#include <vector>
using namespace std;

void subarray(vector<int> &v) {
  int n = v.size();
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      for (int k = i; k <= j; k++) {
        cout << v[k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
}

// void subarray(const vector<int> &arr) {
//   int n = arr.size();
//   for (int start = 0; start < n; ++start) {
//     int end = start;
//     while (end < n) {
//       // Print subarray from start to end
//       for (int k = start; k <= end; ++k) {
//         cout << arr[k] << " ";
//       }
//       cout << endl;
//       ++end;
//     }
//   }
// }

int main() {
  vector<int> v = {1, 2, 3, 4, 5};
  subarray(v);
  return 0;
}

#include <iostream>
using namespace std;

pair<string *, int> insert_end(string *arr, int n, string el) {
  string *temparr = new string[n + 1];
  for (int i = 0; i < n; i++) {
    temparr[i] = arr[i];
  }
  temparr[n] = el;
  return {temparr, n + 1};
}

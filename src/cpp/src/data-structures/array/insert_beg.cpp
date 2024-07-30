#include <iostream>
using namespace std;

pair<string *, int> insert_beg(string *arr, int n, string el) {
  string *temparr = new string[n + 1];
  temparr[0] = el;
  for (int i = 1; i < n + 1; i++) {
    temparr[i] = arr[i - 1];
  }
  return {temparr, n + 1};
}

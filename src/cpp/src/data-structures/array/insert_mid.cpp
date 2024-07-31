#include <iostream>
using namespace std;

pair<string *, int> insert_mid(string *arr, int n, string el, int j) {
  string *temparr = new string[n + 1];
  for (int i = 0; i < j - 1; i++) {
    temparr[i] = arr[i];
  }
  temparr[j - 1] = el;
  for (int i = j; i < n + 1; i++) {
    temparr[i] = arr[i - 1];
  }
  return {temparr, n + 1};
}

#include <iostream>
using namespace std;

string *create_array(int n) {
  string *arr = new string[n];
  string el = "";
  for (int i = 0; i < n; i++) {
    cout<<"> ";
    cin >> el;
    arr[i] = el;
  }
  return arr;
}

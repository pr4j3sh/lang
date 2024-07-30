#include "basic.hpp"
#include "ds_array.hpp"
#include "iostream"
using namespace std;

int main() {
  // basic
  // hw();

  // array
  int n;
  cout << "> ";
  cin >> n;
  string *arr = create_array(n);
  // string arr[] = {"cool", "whew"};
  print_array(arr, n);
  string el = "";
  cout << "> ";
  cin >> el;
  pair<string *, int> p;
  p = insert_beg(arr, n, el);
  print_array(p.first, p.second);

  free_mem(arr);
  free_mem(p.first);
  return 0;
}

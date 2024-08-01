#include "ds/array.hpp"
#include <iostream>
using namespace std;

void array_func() {
  int n;
  cout << "> ";
  cin >> n;
  string *arr = create_array(n);
  // string arr[] = {"cool", "whew"};
  print_array(arr, n);
  string el = "";
  cout << "> ";
  cin >> el;
  pair<string *, int> p, q, r;
  p = insert_beg(arr, n, el);
  n = p.second;
  print_array(p.first, n);

  cout << "> ";
  cin >> el;
  q = insert_end(p.first, n, el);
  n = q.second;
  print_array(q.first, n);

  int j;
  cout << "> ";
  cin >> j;
  cout << "> ";
  cin >> el;
  r = insert_mid(q.first, n, el, j);
  n = r.second;
  print_array(r.first, n);

  free_mem(arr);
  free_mem(p.first);
  free_mem(q.first);
  free_mem(r.first);
}

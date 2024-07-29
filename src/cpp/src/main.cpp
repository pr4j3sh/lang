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
  return 0;
}

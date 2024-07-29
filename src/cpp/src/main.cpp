#include "basic.h"
#include "ds_array.h"
#include "iostream"
using namespace std;

int main() {
  // basic
  // hw();

  // array
  int n = 2;
  string *arr = create_array(n);
  print_array(arr, n);
  return 0;
}

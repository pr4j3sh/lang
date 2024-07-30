#include <iostream>
using namespace std;

void free_mem(string *arr){
  delete[] arr;
}

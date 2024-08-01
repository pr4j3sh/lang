#include "ds/singly_linked_list.hpp"
#include <iostream>
using namespace std;

void linked_list_func() {
  int n;
  cout << "> ";
  cin >> n;

  Node head = create_singly_linked_list(n);
  print_singly_linked_list(head);
}

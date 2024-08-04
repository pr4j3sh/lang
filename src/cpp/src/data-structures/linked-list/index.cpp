#include "ds/singly_linked_list.hpp"
#include <iostream>
using namespace std;

void linked_list_func() {
  Node *head = create();
  print(head);
  int idx;
  cout << "> ";
  cin >> idx;
  string val;
  cout << "> ";
  cin >> val;
  head = insert(head, val, idx);
  print(head);
}

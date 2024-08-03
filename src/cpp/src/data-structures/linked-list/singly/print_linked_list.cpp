#include "ds/singly_linked_list.hpp"
#include <iostream>
using namespace std;

void print_singly_linked_list(Node *head) {
  for (Node *i = head; i != nullptr; i = i->next) {
    cout << i->val << endl;
  }
}

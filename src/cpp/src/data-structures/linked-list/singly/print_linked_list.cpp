#include "ds/singly_linked_list.hpp"
#include <iostream>
using namespace std;

void print(Node *head) {
  for (Node *i = head; i != nullptr; i = i->next) {
    cout << i->val << endl;
  }
}

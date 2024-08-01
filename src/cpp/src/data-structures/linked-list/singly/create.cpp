#include "ds/singly_linked_list.hpp"
#include <iostream>
using namespace std;

Node create_singly_linked_list(int n) {
  Node head;
  head.next = nullptr;
  for (int i = 0; i < n; i++) {
    Node temp;
    string val = "";
    cout << "> ";
    cin >> val;
    temp.val = val;
    cout << temp.val << endl;
    cout << head.next << endl;
    temp.next = head.next;
    cout << temp.next << endl;
    head.next = &temp;
    cout << head.next << endl;
  }

  cout << &head << endl;
  for (Node *i = &head; i != nullptr; i = i->next) {
    cout << i->val << endl;
  }
  return head;
}

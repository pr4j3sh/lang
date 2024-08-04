#include "ds/singly_linked_list.hpp"
#include <iostream>
using namespace std;

Node *insert(Node *head, string val, int idx) {
  Node *h = head;
  if (idx == 1) {
    Node *temp = new Node;
    temp->val = val;
    temp->next = head;
    head = temp;
    return h;
  }
  int j = 1;
  for (Node *i = head; i != nullptr; i = i->next) {
    head = i;
    j++;
    if (j == idx)
      break;
  }
  Node *temp = new Node;
  temp->val = val;
  temp->next = head->next;
  head->next = temp;
  return h;
}

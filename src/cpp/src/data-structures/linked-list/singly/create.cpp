#include "ds/singly_linked_list.hpp"
#include <iostream>
using namespace std;

Node *create() {
  Node *head = nullptr;
  Node *tail = nullptr;

  char choice;
  cout << "choice > ";
  cin >> choice;
  while (choice == 'a') {
    string val;
    cout << "val > ";
    cin >> val;
    Node *temp = new Node;
    temp->val = val;
    temp->next = nullptr;
    if (head == nullptr)
      head = temp;
    else
      tail->next = temp;
    tail = temp;
    cout << "choice > ";
    cin >> choice;
  }
  return head;
}

#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H
#include <iostream>
using namespace std;

struct Node {
  string val;
  Node *next;
};

Node *create_singly_linked_list();
void print_singly_linked_list(Node *);

#endif

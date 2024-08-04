#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H
#include <iostream>
using namespace std;

struct Node {
  string val;
  Node *next;
};

Node *create();
void print(Node *);
Node *insert(Node *, string, int);

#endif

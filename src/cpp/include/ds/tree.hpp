#ifndef TREE_H
#define TREE_H

#include <iostream>
using namespace std;

struct Node {
  int val;
  Node *left;
  Node *right;
};

void create_tree();

#endif

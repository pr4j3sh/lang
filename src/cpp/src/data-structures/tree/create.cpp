#include "ds/tree.hpp"

Node *create(Node *root) {
  cout << "enter data" << endl;
  int val;
  cin >> val;
  root = new Node;
  root->val = val;

  if (val == -1) {
    return nullptr;
  }

  cout << "enter val left of " << val << endl;
  root->left = create(root->left);
  cout << "enter val right of " << val << endl;
  root->right = create(root->right);
  return root;
}

void create_tree() {
  Node *root = nullptr;
  cout << "creating a tree" << endl;
  root = create(root);
}

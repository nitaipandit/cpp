#include <iostream>
class Node {
  int data;
  Node *left;
  Node *right;
  Node(int val) {
    data = val;
    right = left = NULL;
  }
};
Node *preorder(std::vector<int> v) {}

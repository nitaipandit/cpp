#include <iostream>
#include <vector>
class Node {
public:
  int data;
  Node *right;
  Node *left;
  Node(int val) {
    data = val;
    right = left = NULL;
  }
};
static int idx = -1;
Node *Bulidbuffer(std::vector<int> v) {
  idx++;
  if (v[idx] == -1) {
    return NULL;
  }
  Node *root = new Node(v[idx]);
  root->left = Bulidbuffer(v);
  root->right = Bulidbuffer(v);
  return root;
}

void inorder(Node *root) {
  if (root == NULL) {
    return;
  }
  inorder(root->left);
  std::cout << root->data << " ";
  inorder(root->right);
}
int main() {
  std::vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(-1);
  v.push_back(-1);
  v.push_back(3);
  v.push_back(4);
  v.push_back(-1);
  v.push_back(-1);
  v.push_back(-1);
  v.push_back(5);
  v.push_back(-1);
  v.push_back(-1);
  Node *root = Bulidbuffer(v);
  inorder(root);
}

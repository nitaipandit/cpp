#include <iostream>
#include <vector>
class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int val) {
    data = val;
    left = right = NULL;
  }
};
static int idx = -1;
Node *preorder(std::vector<int> v) {
  idx++;
  if (v[idx] == -1) {
    return NULL;
  }
  Node *root = new Node(v[idx]);
  root->left = preorder(v);
  root->right = preorder(v);
  return root;
}
void preordertraversal(Node *root) {
  if (root == NULL) {
    return;
  }
  std::cout << root->data << " ";
  preordertraversal(root->left);
  preordertraversal(root->right);
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
  v.push_back(5);
  v.push_back(-1);
  v.push_back(-1);
  Node *root = preorder(v);
  preordertraversal(root);
}

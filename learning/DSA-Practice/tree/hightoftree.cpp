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
Node *buildtree(std::vector<int> v) {
  idx++;
  if (v[idx] == -1) {
    return NULL;
  }
  Node *root = new Node(v[idx]);
  root->left = buildtree(v);
  root->right = buildtree(v);
  return root;
}
int hight(Node *root) {
  if (root == NULL) {
    return 0;
  }
  int leftht = hight(root->left);
  int righth = hight(root->right);
  return std::max(leftht, righth) + 1;
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
  Node *root = buildtree(v);
  std::cout << hight(root) << std::endl;
}

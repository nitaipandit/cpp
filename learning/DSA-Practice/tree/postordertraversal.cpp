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
Node *bulidtree(std::vector<int> postorder) {
  idx++;
  if (postorder[idx] == -1) {
    return NULL;
  }
  Node *root = new Node(postorder[idx]);
  root->left = bulidtree(postorder);
  root->right = bulidtree(postorder);
  return root;
}
void postorder(Node *root) {
  if (!root) {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  std::cout << root->data << " ";
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
  Node *root = bulidtree(v);
  postorder(root);
}

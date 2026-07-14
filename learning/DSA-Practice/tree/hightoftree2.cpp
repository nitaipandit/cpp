
#include <iostream>
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
Node *buildtree() {
  int data;
  std::cout << "enter the data:" << std::endl;
  std::cin >> data;
  if (data == -1) {
    return NULL;
  }
  Node *root = new Node(data);
  std::cout << "enter the element for left Node " << data << ":" << std::endl;
  root->left = buildtree();
  std::cout << "enter the element for right Node " << data << ":" << std::endl;
  root->right = buildtree();
  return root;
}

int hightoftree(Node *root) {
  if (root == NULL) {
    return 0;
  }
  int left = hightoftree(root->left);
  int right = hightoftree(root->right);
  return std::max(left, right) + 1;
}

int main() {
  Node *root = NULL;
  root = buildtree();
  std::cout << "hight of tree= " << hightoftree(root) << std::endl;
}

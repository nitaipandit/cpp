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
Node *buildtree(Node *root) {
  int data;
  std::cout << "enter the data:" << std::endl;
  std::cin >> data;
  root = new Node(data);
  if (data == -1) {
    return NULL;
  }
  std::cout << "enter the element for left Node " << data << " :" << std::endl;
  root->left = buildtree(root->left);
  std::cout << "enter the element for right Node " << data << " :" << std::endl;
  root->right = buildtree(root->right);
  return root;
}
void preorder(Node *root) {
  if (root == NULL) {
    return;
  }
  std::cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}
bool isidentical(Node *r1, Node *r2) {
  if (r1 == NULL && r2 == NULL) {
    return true;
  }
  if (r1 == NULL && r2 != NULL) {
    return false;
  }
  if (r1 != NULL && r2 == NULL) {
    return false;
  }
  bool left = isidentical(r1->left, r2->left);
  bool right = isidentical(r1->right, r2->right);
  bool value = r1->data == r2->data;
  if (left && right && value) {
    return true;
  } else {
    return false;
  }
}
int main() {
  Node *root = NULL;
  Node *root2 = NULL;
  root = buildtree(root);
  root2 = buildtree(root2);
  std::cout << "isidentical:" << isidentical(root, root2) << std::endl;
}

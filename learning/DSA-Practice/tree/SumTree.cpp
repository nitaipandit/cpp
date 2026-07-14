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
  std::cout << "enter the data:";
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

int sumtree(Node *root) {
  if (root == NULL) {
    return 0;
  }
  int leftsum = sumtree(root->left);
  int rightsum = sumtree(root->right);
  root->data += leftsum + rightsum;
  return root->data;
}
void preorder(Node *root) {
  if (root == NULL) {
    return;
  }
  std::cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}
int main() {
  Node *root = NULL;
  root = buildtree(root);
  std::cout << "before Conversion." << std::endl;
  preorder(root);
  std::cout << std::endl;
  sumtree(root);
  std::cout << "after Conversion." << std::endl;
  preorder(root);
  std::cout << std::endl;
}

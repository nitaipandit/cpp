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
  std::cout << "enter the element for left Node" << data << std::endl;
  root->left = buildtree(root->left);
  std::cout << "enter the e;ement for right Node" << data << std::endl;
  root->right = buildtree(root->right);
  return root;
}
void kthlevel(Node *root, int k) {
  if (root == NULL) {
    return;
  }
  if (k == 1) {
    std::cout << root->data << " ";
  }
  kthlevel(root->left, k - 1);
  kthlevel(root->right, k - 1);
}
int main() {
  Node *root = NULL;
  root = buildtree(root);
  int k;
  std::cout << "enter the kth level ";
  std::cin >> k;
  kthlevel(root, k);
  std::cout << std::endl;
}

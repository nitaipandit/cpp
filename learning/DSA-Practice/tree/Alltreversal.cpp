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
  std::cout << "enter the data :";
  std::cin >> data;
  root = new Node(data);
  if (data == -1) {
    return NULL;
  }
  std::cout << "enter the element for left Node " << data << std::endl;
  root->left = buildtree(root->left);
  std::cout << "enter the element for right Node " << data << std::endl;
  root->right = buildtree(root->right);
  return root;
}
void preoder(Node *root) {
  if (root == NULL) {
    return;
  }
  std::cout << root->data << " ";
  preoder(root->left);
  preoder(root->right);
}

void inorder(Node *root) {
  if (root == NULL) {
    return;
  }
  inorder(root->left);
  std::cout << root->data;
  inorder(root->right);
}

void postorder(Node *root) {
  if (root == NULL) {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  std::cout << root->data;
}
int main() {
  Node *root = NULL;
  root = buildtree(root);
  int opretion;
  while (1) {
    std::cout << "enter the opretion: ";
    std::cin >> opretion;
    switch (opretion) {
    case 1: {
      preoder(root);
      break;
    }
    case 2: {
      inorder(root);
      break;
    }
    case 3: {
      postorder(root);
      break;
    }
    }
    std::cout << std::endl;
  }
}

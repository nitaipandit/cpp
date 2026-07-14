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
  if (data == -1) {
    return NULL;
  }
  root = new Node(data);
  std::cout << "enter the element for left Node" << data << std::endl;
  root->left = buildtree(root->left);
  std::cout << "enter the element for right Node" << data << std::endl;
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

void inorder(Node *root) {
  if (root == NULL) {
    return;
  }
  inorder(root->left);
  std::cout << root->data << " ";
  inorder(root->right);
}

void postorder(Node *root) {
  if (root == NULL) {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  std::cout << root->data << " ";
}

int hight(Node *root) {
  if (root == NULL) {
    return 0;
  }
  int left = hight(root->left);
  int right = hight(root->right);
  return std::max(left, right) + 1;
}
int total(Node *root) {
  if (root == NULL) {
    return 0;
  }
  int left = total(root->left);
  int right = total(root->right);
  return (left + right) + 1;
}

int countleaf(Node *root) {
  if (root == NULL) {
    return 0;
  }
  if (root->left && root->right == NULL) {
    return 1;
  }

  return countleaf(root->left) + countleaf(root->right);
}

int sumNodes(Node *root) {
  if (root == NULL) {
    return 0;
  }
  int left = sumNodes(root->left);
  int right = sumNodes(root->right);
  root->data += left + right;
  return root->data;
}

int main() {
  Node *root = NULL;
  while (1) {
    std::cout << std::endl;
    int choise;
    std::cout << "0.exit." << std::endl;
    std::cout << "1.buildtree." << std::endl;
    std::cout << "2.preorder." << std::endl;
    std::cout << "3.inorder." << std::endl;
    std::cout << "4.postorder." << std::endl;
    std::cout << "5.hight of tree." << std::endl;
    std::cout << "6.count of Nodes." << std::endl;
    std::cout << "7.count leaf Nodes." << std::endl;
    std::cout << "8.sum of all Nodes." << std::endl;

    std::cout << "enter your choise:";
    std::cin >> choise;

    switch (choise) {
    case 0: {
      return 0;
      break;
    }
    case 1: {
      root = buildtree(root);
      break;
    }
    case 2: {
      preorder(root);
      break;
    }
    case 3: {
      inorder(root);
      break;
    }
    case 4: {
      postorder(root);
      break;
    }
    case 5: {
      std::cout << "Total hight of a tree = " << hight(root) << std::endl;
      break;
    }
    case 6: {
      std::cout << "Total Number of Nodes = " << total(root) << std::endl;
      break;
    }
    case 7: {
      std::cout << "Total Count of leaf Nodes = " << countleaf(root)
                << std::endl;
      break;
    }
    case 8: {
      std::cout << "Sum of All Nodes = " << sumNodes(root) << std::endl;
      break;
    }
    }
  }
}

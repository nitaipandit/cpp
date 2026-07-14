#include <iostream>
#include <queue>
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
  std::cout << "enter the data:" << std::endl;
  int data;
  std::cin >> data;
  root = new Node(data);

  if (data == -1) {
    return NULL;
  }
  std::cout << "enter the data for left node " << data << ":" << std::endl;
  root->left = buildtree(root->left);
  std::cout << "enter the data for right node " << data << ":" << std::endl;
  root->right = buildtree(root->right);
  return root;
}
void levelordertraversal(Node *root) {
  std::queue<Node *> q;
  q.push(root);
  q.push(NULL);
  while (!q.empty()) {
    Node *temp = q.front();
    q.pop();
    if (temp == NULL) {
      std::cout << std::endl;
      if (!q.empty()) {
        q.push(NULL);
      }
    } else {
      std::cout << temp->data << " ";
      if (temp->left) {
        q.push(temp->left);
      }
      if (temp->right) {
        q.push(temp->right);
      }
    }
  }
}

// levelordertraversal
void inorder(Node *root) {
  if (root == NULL) {
    return;
  }
  inorder(root->left);
  std::cout << root->data << " ";
  inorder(root->right);
}
void preorder(Node *root) {
  if (root == NULL) {
    return;
  }
  std::cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void postorder(Node *root) {
  if (root == NULL) {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  std::cout << root->data << " ";
}
int countleafnode(Node *root) {

  if (root == NULL) {
    return 0;
  }
  if (root->left == NULL && root->right == NULL) {
    return 1;
  }
  return countleafnode(root->left) + countleafnode(root->right);
}

int main() {
  Node *root = NULL;
  root = buildtree(root);
  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  levelordertraversal(root);
  std::cout << "inorder traversal:";
  inorder(root);
  std::cout << std::endl;
  std::cout << "preorder traversal:";
  preorder(root);
  std::cout << std::endl;
  std::cout << "postorder traversal:";
  postorder(root);
  std::cout << std::endl;
  std::cout << "count leaf Node= " << countleafnode(root);
  std::cout << std::endl;
}

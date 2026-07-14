#include <iostream>
class Node {
public:
  int data;
  Node *next;

  Node(int val) {
    this->data = val;
    this->next = NULL;
  }
};

int main() {
  Node *node1 = new Node(10);
  Node *node2 = new Node(20);
  std::cout << node1->data << " ";
}

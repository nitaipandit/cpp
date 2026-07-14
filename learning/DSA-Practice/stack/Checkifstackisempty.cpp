#include <iostream>
class Node {
public:
  int data;
  Node *next;
  Node(int val) {
    data = val;
    next = NULL;
  }
};
class stack {
public:
  Node *top;
  stack() { top = NULL; }
  void push(int val) {
    Node *newnode = new Node(val);
    if (top == NULL) {
      top = newnode;
    } else {
      newnode->next = top;
      top = newnode;
    }
  }
  bool check() {
    Node *temp = top;
    if (temp != NULL) {
      return 1;
    } else {
      return 0;
    }
  }
};
int main() {
  stack s;
  s.push(1);
  if (s.check() == 0) {
    std::cout << "list is empty." << std::endl;
  } else {
    std::cout << "list is not empty." << std::endl;
  }
}

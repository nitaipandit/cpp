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
  void push(int data) {
    Node *newnode = new Node(data);
    if (top == NULL) {
      top = newnode;
    } else {
      newnode->next = top;
      top = newnode;
    }
  }
  void pop() {
    if (top == NULL) {
      std::cout << "stack is empty." << std::endl;
      return;
    }
    Node *temp = top;
    top = top->next;
    delete temp;
  }
  int peak() {
    if (top == NULL) {
      std::cout << "stack is empty." << std::endl;
      return 0;
    } else {
      return top->data;
    }
  }
  bool empty() { return top == NULL; }
};

int main() {
  stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  while (!s.empty()) {
    std::cout << s.peak() << " ";
    s.pop();
  }
}

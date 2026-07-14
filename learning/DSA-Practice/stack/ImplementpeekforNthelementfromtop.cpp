// Implement peek() for Nth element from top?
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
  void peek() {
    int x;
    int count = 1;
    std::cout << "enter the nth number:";
    std::cin >> x;
    Node *temp = top;
    while (temp != NULL && count < x) {
      count++;
      temp = temp->next;
    }
    if (temp == NULL) {
      std::cout << "list is empty." << std::endl;
    } else {
      std::cout << temp->data << std::endl;
    }
  }
};
int main() {
  stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.peek();
}

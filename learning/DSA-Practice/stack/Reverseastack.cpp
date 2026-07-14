#include <exception>
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
  void reverse() {
    Node *prev = NULL;
    Node *curr = top;
    Node *next = NULL;
    while (curr != NULL) {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    top = prev;
  }
  void display() {
    Node *temp = top;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
    std::cout << std::endl;
  }
};
int main() {
  stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.display();
  s.reverse();
  s.display();
}

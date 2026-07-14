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
class list {
public:
  Node *top;
  list() { top = NULL; }
  void push(int val) {
    Node *newnode = new Node(val);
    if (top == NULL) {
      top = newnode;
    } else {
      newnode->next = top;
      top = newnode;
    }
  }
  void pop() {
    Node *temp = top;
    if (top == NULL) {
      std::cout << "list is empty." << std::endl;
    }
    top = top->next;
    delete temp;
  }
  void display() {
    Node *temp = top;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
  }
};
int main() {
  list l;
  l.push(10);
  l.push(20);
  l.push(30);
  l.push(40);
  l.push(40);
  l.pop();
  l.display();
}

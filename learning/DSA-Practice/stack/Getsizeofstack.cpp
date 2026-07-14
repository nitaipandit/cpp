// Get size of stack (count nodes)
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
  void count() {
    Node *temp = top;
    int x = 0;
    while (temp != NULL) {
      x++;
      temp = temp->next;
    }
    std::cout << x << std::endl;
  }
};
int main() {
  stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.count();
}

// Search an element in stack
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
  void search() {
    int x;
    int pos = 1;
    Node *temp = top;
    std::cout << "enter the search elemet:";
    std::cin >> x;
    while (temp != 0) {
      if (temp->data == x) {
        std::cout << "element found at index " << pos << std::endl;
        break;
      } else {
        temp = temp->next;
        pos++;
      }
    }
  }
};
int main() {
  stack s;
  s.push(9);
  s.push(7);
  s.push(5);
  s.push(3);
  s.push(1);
  s.search();
}

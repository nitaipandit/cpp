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
    newnode->next = top;
    top = newnode;
  }
  void pop() {
    if (top == NULL) {
      std::cout << "Stack is empty." << std::endl;
      return;
    }
    Node *temp = top;
    top = top->next;
    delete temp;
  }
  int peek() {
    if (top == NULL) {
      std::cout << "Stack is empty." << std::endl;
      return -1;
    }
    return top->data;
  }
  void display() {
    Node *temp = top;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
    std::cout << std::endl;
  }
  bool isempty() { return top == NULL; }
};
int main() {
  stack st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.display();
  std::cout << "top element:" << st.peek() << std::endl;
  st.pop();
  st.display();
  return 0;
}

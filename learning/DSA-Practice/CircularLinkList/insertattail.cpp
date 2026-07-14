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
class Circular {
public:
  Node *head;
  Node *tail;
  Circular() { head = tail = NULL; }
  void pushback(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = tail = newnode;
      tail->next = head;
    } else {
      newnode->next = head;
      tail->next = newnode;
      tail = newnode;
    }
  }

  void display() {
    if (head == NULL) {
      return;
    }
    std::cout << head->data << "->";
    Node *temp = head->next;
    while (temp != head) {
      std::cout << temp->data << "->";
      temp = temp->next;
    }
    std::cout << head->data << std::endl;
  }
};

int main() {
  Circular cl;
  cl.pushback(1);
  cl.pushback(2);
  cl.pushback(3);
  cl.display();
}

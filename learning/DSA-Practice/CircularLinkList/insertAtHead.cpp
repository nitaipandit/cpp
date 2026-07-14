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
class Circularlist {
public:
  Node *head;
  Node *tail;
  Circularlist() { head = tail = NULL; }
  void pushfront(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = tail = newnode;
      tail->next = head;
    } else {
      newnode->next = head;
      head = newnode;
      tail->next = head;
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
  Circularlist cl;
  cl.pushfront(1);
  cl.pushfront(2);
  cl.pushfront(3);
  cl.display();
}

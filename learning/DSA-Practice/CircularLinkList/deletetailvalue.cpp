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
class circular {
public:
  Node *head;
  Node *tail;
  circular() { head = tail = NULL; }
  void pushfront(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = tail = newnode;
    }
    newnode->next = head;
    head = newnode;
    tail->next = head;
  }

  void print() {
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

  void deletetail() {
    if (head == NULL) {
      return;
    } else if (head == tail) {
      delete head;
      head = tail = NULL;
    } else {
      Node *temp = tail;
      Node *prev = head;
      while (prev->next != tail) {
        prev = prev->next;
      }
      tail = prev;
      tail->next = head;
      temp->next = NULL;
      delete temp;
    }
  }
};

int main() {
  circular cl;
  cl.pushfront(1);
  cl.pushfront(2);
  cl.pushfront(3);
  cl.pushfront(4);
  cl.print();
  cl.deletetail();
  cl.print();
}

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
      tail->next = head;
    } else {
      newnode->next = head;
      head = newnode;
      tail->next = head;
    }
  }

  void deletehead() {
    if (head == NULL) {
      return;
    } else if (head == tail) {
      delete head;
      head = tail = NULL;
    } else {
      Node *temp = head;
      head = head->next;
      tail->next = head;
      temp->next = NULL;
      delete temp;
    }
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
    std::cout << head->data << "->" << std::endl;
  }
};
int main() {
  circular cl;
  cl.pushfront(1);
  cl.pushfront(2);
  cl.pushfront(3);
  cl.print();
  cl.deletehead();
  cl.print();
}

#include <cstddef>
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
  Node *head;
  Node *tail;

  list() { head = tail = NULL; }
  void push_front(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = tail = newnode;
    } else {
      newnode->next = head;
      head = newnode;
    }
  }

  void push_back(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = tail = newnode;
    } else {
      tail->next = newnode;
      tail = newnode;
    }
  }

  void pop_front() {
    if (head == NULL) {
      std::cout << "empty.ll" << std::endl;
      return;
    }
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }

  void pop_back() {
    if (head == NULL) {
      std::cout << "empty.ll" << std::endl;
      return;
    }
    Node *temp = head;
    while (temp->next != tail) {
      temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
  }

  void insert(int val, int pos) {
    if (pos < 0) {
      std::cout << "invalid pos." << std::endl;
      return;
    }
    if (pos == 0) {
      push_front(val);
      return;
    }
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++) {
      temp = temp->next;
    }
    Node *newnode = new Node(val);
    newnode->next = temp->next;
    temp->next = newnode;
  }
  void print() {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
    std::cout << std::endl;
  }
};

int main() {
  list ll;
  ll.push_front(10);
  ll.push_front(20);
  ll.push_front(30);
  ll.push_back(40);
  ll.insert(50, 3);
  // ll.pop_front();
  // ll.pop_back();
  ll.print();
}

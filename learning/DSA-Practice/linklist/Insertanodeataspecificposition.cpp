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

  // Insert a node at a specific position
  void Push_specific(int val, int pos) {
    if (pos < 0) {
      std::cout << "invalid position.";
      return;
    }
    if (pos == 0) {
      push_front(val);
      return;
    }
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++) {
      if (temp == NULL) {
        std::cout << "position out of reange.";
        return;
      }
      temp = temp->next;
    }

    if (temp == NULL) {
      std::cout << "position out of range.";
      return;
    }
    Node *newnode = new Node(val);
    newnode->next = temp->next;
    temp->next = newnode;
  }
  void printinfo() {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
  }
};

int main() {
  list ll;
  ll.push_front(10);
  ll.push_front(20);
  ll.Push_specific(15, 1);
  ll.printinfo();
}

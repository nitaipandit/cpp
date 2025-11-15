// Insert a node at the end.
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
    Node *Newnode = new Node(val);
    if (head == 0) {
      head = tail = Newnode;
    } else {
      Newnode->next = head;
      head = Newnode;
    }
  }

  // Insert at end.
  void push_back(int val) {
    Node *newnode = new Node(val);
    if (head == 0) {
      head = tail = newnode;
    } else {
      tail->next = newnode;
      newnode = tail;
    }
  }
  void Printinfo() {
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
  ll.push_back(5);
  ll.Printinfo();
}

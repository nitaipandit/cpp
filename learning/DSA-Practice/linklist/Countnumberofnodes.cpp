// Count number of nodes.
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
    newnode->next = head;
    head = newnode;
  }

  void print() {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
  }
  void count() {
    int x = 0;
    Node *temp = head;
    while (temp != NULL) {
      temp = temp->next;
      x++;
    }
    std::cout << "\n" << "Their are " << x << " nodes." << std::endl;
  }
};

int main() {
  list ll;
  ll.push_front(10);
  ll.push_front(20);
  ll.push_front(30);
  ll.push_front(40);
  ll.print();
  ll.count();
}

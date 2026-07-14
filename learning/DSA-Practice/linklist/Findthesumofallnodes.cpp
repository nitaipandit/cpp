// Find the sum of all nodes
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

  void printinfo() {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
    std::cout << std::endl;
  }
  void sum() {
    int add = 0;
    Node *temp = head;
    while (temp != NULL) {
      add = add + temp->data;
      temp = temp->next;
    }
    std::cout << add << std::endl;
  }
};
int main() {
  list ll;
  ll.push_front(10);
  ll.push_front(20);
  ll.push_front(30);
  ll.push_front(40);
  ll.push_front(50);
  ll.printinfo();
  ll.sum();
}

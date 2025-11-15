// Create a Linked List and print all elements.
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
    if (head == 0) {
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
  }
};
int main() {
  list ll;
  ll.push_front(10);
  ll.push_front(20);
  ll.push_front(30);
  ll.printinfo();
}

// Search for an element in Linked List
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
  int search(int key) {
    Node *temp = head;
    int ndx;
    while (temp != NULL) {
      if (temp->data == key) {
        return ndx;
      }
      temp = temp->next;
      ndx++;
    }
    return 1;
  }

  void print() {
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
  ll.push_front(40);
  ll.print();
  std::cout << "\n" << ll.search(2) << std::endl;
}

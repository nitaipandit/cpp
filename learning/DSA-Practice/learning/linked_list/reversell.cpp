
#include <iostream>
class Node {
public:
  int data;
  Node *next;

  Node(int val) {
    data = val;
    Node *next = NULL;
  }
};
class List {
public:
  Node *head;
  Node *tail;

  List() { head = tail = NULL; }
  void push_front(int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
      head = tail = newNode;
    } else {
      newNode->next = head;
      head = newNode;
    }
  }

  void reverse() {
    Node *next = NULL;
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL) {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    head = prev;
  }

  void printinfo() {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
    std::cout << std::endl;
  }
};
int main() {
  List ll;
  ll.push_front(20);
  ll.push_front(30);
  ll.printinfo();
  ll.reverse();
  ll.printinfo();
  return 0;
}

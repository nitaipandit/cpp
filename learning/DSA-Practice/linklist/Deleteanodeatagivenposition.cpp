// Delete a node at a given position
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

  void del(int pos) {
    Node *temp = head;
    if (head == NULL) {
      std::cout << "list is empty.";
      return;
    }
    if (pos == 1) {
      Node *temp = head;
      head = head->next;
      delete temp;
      return;
    }
    Node *prev = head;
    Node *curr = head->next;
    int i;
    for (i = 2; i < pos; i++) {
      prev = curr;
      curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
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
  ll.del(2);
  ll.print();
}

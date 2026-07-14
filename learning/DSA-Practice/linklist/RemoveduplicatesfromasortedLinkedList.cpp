// Remove duplicates from a sorted Linked List;
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

  void removedeblicate() {
    Node *temp = head;
    while (temp != NULL && temp->next != NULL) {
      if (temp->data == temp->next->data) {
        Node *Dublicate = temp->next;
        temp->next = temp->next->next;
        delete Dublicate;
      } else {
        temp = temp->next;
      }
    }
  }
  void display() {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
  }
};
int main() {
  list l;
  l.push_front(10);
  l.push_front(20);
  l.push_front(20);
  l.push_front(30);
  l.removedeblicate();
  l.display();
}

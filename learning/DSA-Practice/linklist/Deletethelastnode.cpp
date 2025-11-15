// Delete the last node.
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

  void deletelastnode() {
    if (head == NULL) {
      std::cout << "list is empty.";
      return;
    }
    Node *temp = head;
    while (temp->next != tail) {
      temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
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
  std::cout << "before delete last node." << std::endl;
  ll.printinfo();
  std::cout << "\nAfter delete last node." << std::endl;
  ll.deletelastnode();
  ll.printinfo();
}

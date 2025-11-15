// Delete the first node.
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
  void Delete_firstnode() {
    if (head == NULL) {
      std::cout << "list is empty.";
      return;
    }
    Node *temp = head;
    head = head->next;
    if (head == NULL) {
      tail = NULL;
    }
    delete temp;
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
  std::cout << "before delete first node.\n";
  ll.push_front(10);
  ll.push_front(20);
  ll.push_front(30);
  ll.printinfo();
  std::cout << "after delete first node.\n";
  ll.Delete_firstnode();
  ll.printinfo();
}

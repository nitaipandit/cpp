// Get the Nth node from the end.
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
  void nthnode(int val) {
    Node *temp = head;
    while (temp != NULL) {
      if (val == temp) {
        std::cout << temp->data << " " std::endl;
        return;
      } else {
        temp = temp->next;
      }
    }
  }
};
int main() {
  list ll;
  ll.push_front(10);
  ll.push_front(20);
  ll.push_front(30);
  ll.push_front(40);
  ll.push_front(50);
  ll.nthnode(2);
}

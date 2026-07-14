// Find the middle element of Linked List
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

  void find_mid() {
    Node *temp = head;
    int i, a = 0;
    while (temp != NULL) {
      a++;
      temp = temp->next;
    }
    Node *temp2 = head;
    for (i = 0; i < a / 2; i++) {
      temp2 = temp2->next;
    }
    std::cout << temp2->data << std::endl;
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
  ll.push_front(50);
  ll.find_mid();
}

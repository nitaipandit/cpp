// Find maximum element in Linked List
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
  void maximun() {
    Node *temp = head;
    int max = 0;
    while (temp != NULL) {
      if (max < temp->data) {
        max = temp->data;
      }
      temp = temp->next;
    }
    std::cout << max << std::endl;
  }
};
int main() {
  list ll;
  ll.push_front(10);
  ll.push_front(40);
  ll.push_front(30);
  ll.push_front(20);
  ll.maximun();
}

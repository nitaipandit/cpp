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
  void occurrence(int find) {
    Node *temp = head;
    int x = 0;
    while (temp != NULL) {
      if (find == temp->data) {
        x++;
      }
      temp = temp->next;
    }
    std::cout << x << " times" << std::endl;
  }
  void display() {
    Node *temp = head;
    while (head != NULL) {
      std::cout << temp->data;
    }
    temp = temp->next;
  }
};
int main() {
  list ll;
  ll.push_front(2);
  ll.push_front(3);
  ll.push_front(4);
  ll.push_front(2);
  ll.push_front(2);
  ll.occurrence(2);
}

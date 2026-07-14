#include <cstddef>
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
class List {
  Node *head;
  Node *tail;

public:
  List() { head = tail = NULL; }

  void Push_front(int val) {
    Node *NewNode = new Node(val);
    if (head == NULL) {
      head = tail = NewNode;
    } else {
      NewNode->next = head;
      head = NewNode;
    }
  }

  void push_back(int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
      head = tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
  }

  void printll() {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
  }
};
int main() {
  List ll;
  ll.Push_front(1);
  ll.Push_front(2);
  ll.Push_front(3);
  ll.push_back(4);

  ll.printll();
}

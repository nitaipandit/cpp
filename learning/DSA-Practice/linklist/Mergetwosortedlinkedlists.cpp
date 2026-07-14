// Merge two sorted linked lists
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
  list() { head = NULL; }
  void push_back(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = newnode;
      return;
    }

    Node *temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newnode;
  }
  void display() {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
  }
};
Node *mergeshort(Node *head1, Node *head2) {
  if (head1 == NULL) {
    return head2;
  }
  if (head2 == NULL) {
    return head1;
  }
  if (head1->data <= head2->data) {
    head1->next = mergeshort(head1->next, head2);
    return head1;
  } else {
    head2->next = mergeshort(head1, head2->next);
    return head2;
  }
}
int main() {
  list l1, l2;
  l1.push_back(1);
  l1.push_back(2);
  l1.push_back(3);
  l2.push_back(3);
  l2.push_back(4);
  l2.push_back(5);
  Node *mergehead = mergeshort(l1.head, l2.head);

  Node *temp = mergehead;
  while (temp != NULL) {
    std::cout << temp->data << " ";
    temp = temp->next;
  }
}

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

  void pushback(int val) {
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
};

void insertlist1(list &l1) {
  int data, i, n;
  std::cout << "enter the lenght: ";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element for list 1: ";
    std::cin >> data;
    l1.pushback(data);
  }
}
void insertlist2(list &l2) {
  int data, i, n;
  std::cout << "enter the length: ";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element for list 2: ";
    std::cin >> data;
    l2.pushback(data);
  }
}
Node *mergeshot(Node *head1, Node *head2) {
  if (head1 == NULL) {
    return head2;
  }
  if (head2 == NULL) {
    return head1;
  }
  if (head1->data <= head2->data) {
    head1->next = mergeshot(head1->next, head2);
    return head1;
  } else {
    head2->next = mergeshot(head1, head2->next);
    return head2;
  }
}

int main() {
  list l1, l2;
  insertlist1(l1);
  insertlist2(l2);
  Node *mergehead = mergeshot(l1.head, l2.head);

  Node *temp = mergehead;
  while (temp != NULL) {
    std::cout << temp->data << " ";
    temp = temp->next;
  }
}

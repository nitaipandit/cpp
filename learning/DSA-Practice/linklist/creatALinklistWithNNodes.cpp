// creat a linklist with 'n' Nodes.
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
public:
  Node *head;
  Node *tail;
  List() { head = tail = NULL; }
  void pushfront(int val) {
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
  }
  void display() {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
  }
};

void insert(List &l) {
  int n, x;
  std::cout << "enter the length of list:";
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> x;
    l.pushfront(x);
  }
}

int main() {
  List l;
  insert(l);
  l.display();
}

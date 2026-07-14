#include <iostream>
class Node {
public:
  int data;
  Node *next;

  // constructer;

  Node(int val) {
    this->data = val;
    this->next = NULL;
  }
};
void insertathead(Node *&head, int d) {
  Node *tem = new Node(d);
  tem->next = head;
  head = tem;
}
void print(Node *&head) {
  Node *tem = head;
  while (tem != NULL) {
    std::cout << tem->data << " ";
    tem = tem->next;
  }
  std::cout << std::endl;
}
int main() {
  Node *node1 = new Node(10);
  // std::cout << node1->data << std::endl;
  // std::cout << node1->next << std::endl;
  Node *head = node1;
  print(head);
  insertathead(head, 12);
  print(head);
}

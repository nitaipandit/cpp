// Check if Linked List is sorted or not
// Input: 1 → 2 → 5 → 6 → 9
// Output: Sorted
// Input: 1 → 4 → 3 → 7
// Output: Not Sorted
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
  void push_back(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = tail = newnode;
    } else {
      tail->next = newnode;
      tail = newnode;
    }
  }
  void check() {
    Node *temp = head;
    if (head == NULL || head->next == NULL) {
      std::cout << "sorted" << std::endl;
    }
    while (temp->next != NULL) {
      if (temp->data > temp->next->data) {
        std::cout << "not sorted." << std::endl;
        return;
      }
      temp = temp->next;
    }
    std::cout << "sorted." << std::endl;
  }
};
int main() {
  list ll;
  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(7);
  ll.push_back(4);
  ll.push_back(5);
  ll.check();
}

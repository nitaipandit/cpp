#include <iostream>
class Node {
public:
  int data;
  Node *next;
  Node *prev;
  Node(int val) {
    data = val;
    prev = next = NULL;
  }
};
class dublylist {
public:
  Node *head;
  Node *tail;
  dublylist() { head = tail = NULL; }
  void push_front(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = tail = newnode;
    } else {
      newnode->next = head;
      head->prev = newnode;
      head = newnode;
    }
  }

  void push_back(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = tail = newnode;
    } else {
      newnode->prev = tail;
      tail->next = newnode;
      tail = newnode;
    }
  }
  void pop_front() {
    Node *temp = head;
    head = head->next;
    delete temp;
  }
  void display() {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << "<=>";
      temp = temp->next;
    }
    std::cout << std::endl;
  }
  void pop_back() {
    Node *temp = tail;
    if (head == NULL) {
      std::cout << "list is empty.";
    }
    tail = tail->prev;
    if (tail != NULL) {
      tail->next = NULL;
    }
    temp->prev = NULL;
    delete temp;
  }
  void insertnthPosition(int val) {
    Node *newnode = new Node(val);
    int n;
    std::cout << "enter the nth Index:";
    std::cin >> n;
    Node *prev = head;
    Node *curr = head->next;
    if (head == NULL) {
      std::cout << "list is empty.";
      return;
    }
    if (n == 0) {
      newnode->next = head;
      head = newnode;
    }
    for (int i = 1; i < n; i++) {
      if (curr == NULL) {
        std::cout << "index is out of range.";
      }
      prev = curr;
      curr = curr->next;
    }
    prev->next = newnode;
    newnode->next = curr;
    if (curr == NULL) {
      tail = newnode;
    }
  }
};
void insert_pushfront(dublylist &dll) {
  int x, i, n;
  std::cout << "enter the lenght of dublylist: ";
  std::cin >> x;
  for (i = 0; i < x; i++) {
    std::cout << "enter the element:";
    std::cin >> n;
    dll.push_front(n);
  }
}
void insert_pushback(dublylist &dll) {
  int i, x, n;
  std::cout << "enter the lenght of dublylist:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> x;
    dll.push_back(x);
  }
}
void push_nth(dublylist &dll) {
  int x;
  std::cout << "enter the nth value:";
  std::cin >> x;
  dll.insertnthPosition(x);
}
int main() {
  dublylist dll;
  int choise;
  while (1) {
    std::cout << "0.exit." << std::endl;
    std::cout << "1.Display." << std::endl;
    std::cout << "2.push_front." << std::endl;
    std::cout << "3.push_back" << std::endl;
    std::cout << "4.push_nthNode" << std::endl;
    std::cout << "5.pop_front" << std::endl;
    std::cout << "enter your choise:";
    std::cin >> choise;
    switch (choise) {
    case 0: {
      return 0;
      break;
    }
    case 1: {
      dll.display();
      break;
    }
    case 2: {
      insert_pushfront(dll);
      break;
    }
    case 3: {
      insert_pushback(dll);
      break;
    }
    case 4: {
      push_nth(dll);
      break;
    }
    case5: {
      dll.pop_front();
      break;
    }
    }
  }
}

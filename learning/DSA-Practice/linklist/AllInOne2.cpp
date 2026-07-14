// try linklist qustion solved.
#include <iostream>
class node {
public:
  int data;
  node *next;
  node(int val) {
    data = val;
    next = NULL;
  }
};
class list {
public:
  node *head;
  node *tail;
  list() { head = tail = NULL; }
  void pushfront(int val) {
    node *newnode = new node(val);
    if (head == NULL) {
      head = tail = newnode;
    } else {
      newnode->next = head;
      head = newnode;
    }
  }
  void display() {
    node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
    std::cout << std::endl;
  }
  void pushback(int val) {
    node *newnode = new node(val);
    if (head == NULL) {
      head = tail = newnode;
    } else {
      tail->next = newnode;
      tail = newnode;
    }
  }
  void insertatposition(int val) {
    node *newnode = new node(val);
    int i, n;
    std::cout << "enter the nth position:";
    std::cin >> n;
    node *prev = head;
    node *curr = head->next;
    if (head == NULL) {
      std::cout << "list is empty.";
      return;
    }
    if (n == 0) {
      newnode->next = head;
      head = newnode;
    }
    for (i = 1; i < n; i++) {
      prev = curr;
      curr = curr->next;
    }
    prev->next = newnode;
    newnode->next = curr;
    if (curr == NULL) {
      tail = newnode;
    }
  }
  void deletefirst() {
    node *temp = head;
    if (temp == NULL) {
      std::cout << "list is enpty." << std::endl;
      return;
    }
    temp = head;
    head = temp->next;
    delete temp;
  }
  void deletelast() {
    node *temp = head;
    while (temp->next != tail) {
      temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
  }
  void deletenthnode() {
    int n;
    std::cout << "enter the nth position:";
    std::cin >> n;
    node *prev = head;
    node *curr = head->next;
    if (head == NULL) {
      std::cout << "list is empty." << std::endl;
      return;
    }
    if (n == 1) {
      node *temp = head;
      head = head->next;
      delete temp;
    }
    for (int i = 2; i < n; i++) {
      prev = curr;
      curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
  }
  void traverseforward() { node *temp = tail }
};
void insert(list &l) {
  int i, x, n;
  std::cout << "enter the number of lenght:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> x;
    l.pushfront(x);
  }
}
void insertback(list &l) {
  int i, n, x;
  std::cout << "enter the number of lenght:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the elemet:";
    std::cin >> x;
    l.pushback(x);
  }
}
void nthvalue(list &l) {
  int n;
  std::cout << "enter the value for nth position:";
  std::cin >> n;
  l.insertatposition(n);
}
int main() {
  list l;
  int choise;
  while (1) {
    std::cout << "0.to exit." << std::endl;
    std::cout << "1.insert at begning." << std::endl;
    std::cout << "2.display." << std::endl;
    std::cout << "3.insert at end." << std::endl;
    std::cout << "4.insert at given position." << std::endl;
    std::cout << "5.delete first node." << std::endl;
    std::cout << "6.delete last node." << std::endl;
    std::cout << "7.delete node at given position." << std::endl;
    std::cout << "8.traverse forward." << std::endl;
    std::cout << "enter your choise:";
    std::cin >> choise;
    switch (choise) {
    case 1: {
      insert(l);
      break;
    }
    case 2: {
      l.display();
      break;
    }
    case 0: {
      return 0;
      break;
    }
    case 3: {
      insertback(l);
      break;
    }
    case 4: {
      nthvalue(l);
      break;
    }
    case 5: {
      l.deletefirst();
      break;
    }
    case 6: {
      l.deletelast();
      break;
    }
    case 7: {
      l.deletenthnode();
      break;
    }
    case 8: {
      l.traverseforward();
      break;
    }
    }
  }

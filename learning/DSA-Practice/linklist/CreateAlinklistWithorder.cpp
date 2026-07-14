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
  void display() {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
  }
  void push_front(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = tail = newnode;
    } else {
      newnode->next = head;
      head = newnode;
    }
  }

  void pop_back() {
    if (head == NULL) {
      std::cout << "list is empty.";
    }
    Node *temp = head;
    while (temp->next != tail) {
      temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
  }
  void pop_front() {
    if (head == NULL) {
      std::cout << "list is empty." << std::endl;
      return;
    }
    Node *temp = head->next;
    delete head;
    head = temp;
  }

  void front(list &l) {
    int i, n, x;
    std::cout << "enter the length of push_front linklest: ";
    std::cin >> n;
    for (i = 0; i < n; i++) {
      std::cout << "enter the element for push_front " << i + 1 << ": ";
      std::cin >> x;
      l.push_front(x);
    }
  }
  void pop_nth() {
    int i, n;
    std::cout << "enter the element number u want to pop: ";
    std::cin >> n;
    Node *temp = head;
    if (head == NULL) {
      std::cout << "list is empty." << std::endl;
    }
    if (n == 1) {
      Node *temp = head;
      head = head->next;
      delete temp;
    }
    Node *prev = head;
    Node *curr = head->next;
    for (int i = 2; i < n; i++) {
      prev = curr;
      curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
  }
};
void back(list &l) {
  int i, n, x;
  std::cout << "enter the length of push_back linklest: ";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element for push_back " << i + 1 << ": ";
    std::cin >> x;
    l.push_back(x);
  }
}

void front(list &l) {
  int i, n, x;
  std::cout << "enter the length of push_front linklest: ";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element for push_front " << i + 1 << ": ";
    std::cin >> x;
    l.push_front(x);
  }
}

int main() {
  list l;
  int choise;
  std::cout << "1.push_back." << "\n"
            << "2.push_front.\n"
            << "3.pop_back\n"
            << "4.pop_front\n"
            << "5.pop_nth.\n"
            << "9.display.\n"
            << "0.exit\n"
            << std::endl;
  while (1) {
    std::cout << "enter the operetion: ";
    std::cin >> choise;

    switch (choise) {
    case 1: {
      back(l);
      break;
    }
    case 2: {
      front(l);
      break;
    }
    case 3: {
      l.pop_back();
      break;
    }
    case 4: {
      l.pop_front();
      break;
    }
    case 5: {
      l.pop_nth();
      break;
    }
    case 9: {
      l.display();
      break;
    }
    case 0: {
      return 0;
    }
    }
  }
}

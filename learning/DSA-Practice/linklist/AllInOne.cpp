#include <climits>
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
  // push_front in list;
  void Push_front(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = tail = newnode;
    } else {
      newnode->next = head;
      head = newnode;
    }
  }
  // push_back in list;
  void push_back(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = tail = newnode;
    } else {
      tail->next = newnode;
      tail = newnode;
    }
  }
  // push at n index in list;
  void push_nth(int val) {
    Node *newnode = new Node(val);
    int n, i;
    std::cout << "enter the nth_index: ";
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
    for (i = 1; i < n; i++) {
      if (curr == NULL) {
        std::cout << "index is out of range.";
        return;
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
  // pop front in list;
  void pop_front() {
    Node *temp = head;
    if (head == NULL) {
      std::cout << "list is empty.";
      return;
    }
    temp = head;
    head = temp->next;
    delete temp;
  }
  // pop back in list;
  void pop_back() {
    Node *temp = head;
    while (temp->next != tail) {
      temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
  }
  // pop nth index in list.
  void pop_nth() {
    int x, i;
    std::cout << "enter the nth position to pop value: ";
    std::cin >> x;
    Node *prev = head;
    Node *curr = head->next;
    if (head == NULL) {
      std::cout << "list is empty." << std::endl;
      return;
    }
    if (x == 1) {
      Node *temp = head;
      head = head->next;
      delete temp;
      return;
    }
    for (i = 2; i < x; i++) {
      prev = curr;
      curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
  }
  // search in list;
  void search() {
    Node *temp = head;
    int x;
    std::cout << "enter the index to search: ";
    std::cin >> x;
    while (temp->data != x) {
      temp = temp->next;
    }
    std::cout << temp->data << std::endl;
  }
  // count nodes in list;
  void count() {
    Node *temp = head;
    int x = 0;
    while (temp != NULL) {
      x++;
      temp = temp->next;
    }
    std::cout << x << " " << std::endl;
  }
  // reverse in list;
  void reverse() {
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    while (curr != NULL) {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    head = prev;
  }
  // find mid index in list;
  void find_mid() {
    int i, x = 0;
    Node *temp = head;
    while (temp != NULL) {
      temp = temp->next;
      x++;
    }
    Node *temp2 = head;
    for (i = 0; i < x / 2; i++) {
      temp2 = temp2->next;
    }
    std::cout << temp2->data << std::endl;
  }
  // find maximum value in index;
  void max() {
    int x = 0;
    Node *temp = head;
    while (temp != NULL) {
      if (x < temp->data) {
        x = temp->data;
      }
      temp = temp->next;
    }
    std::cout << x << std::endl;
  }
  // find minimum:
  void min() {
    int x = INT_MAX;
    Node *temp = head;
    while (temp != NULL) {
      if (x > temp->data) {
        x = temp->data;
      }
      temp = temp->next;
    }
    std::cout << x << std::endl;
  }
  // check empty or not;
  void check_empty() {
    Node *temp = head;
    if (head == NULL) {
      std::cout << "list id=s empty." << std::endl;
      return;
    } else {
      std::cout << "list is not empty." << std::endl;
      return;
    }
  }
  // display all index;
  void display() {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
    std::cout << std::endl;
  }
};
void front(list &l) {
  int x, i, n;
  std::cout << "enter the length of list: ";
  std::cin >> x;
  for (i = 0; i < x; i++) {
    std::cout << "enter the element: ";
    std::cin >> n;
    l.Push_front(n);
  }
}
void back(list &l) {
  int x, i, n;
  std::cout << "enter the length of list: ";
  std::cin >> x;
  for (i = 0; i < x; i++) {
    std::cout << "enter the element: ";
    std::cin >> n;
    l.push_back(n);
  }
}

void pushnth(list &l) {
  int x;
  std::cout << "enter the value:";
  std::cin >> x;
  l.push_nth(x);
}

int main() {
  list ll;
  while (1) {
    std::cout << "0.To exit." << std::endl;
    std::cout << "1.Insert at Beginning of Linked List." << std::endl;
    std::cout << "2.Insert at End of Linked List." << std::endl;
    std::cout << "3.Insert at Given Position." << std::endl;
    std::cout << "4.Delete First Node." << std::endl;
    std::cout << "5.Delete Last Node" << std::endl;
    std::cout << "6.Delete Node at Given Position" << std::endl;
    std::cout << "7.Search an Element in Linked List" << std::endl;
    std::cout << "8.Count Number of Nodes." << std::endl;
    std::cout << "9.Print Linked List." << std::endl;
    std::cout << "10.Reverse a Linked List." << std::endl;
    std::cout << "11.Find Middle Element." << std::endl;
    std::cout << "12.Find Maximum Element." << std::endl;
    std::cout << "13.Find Minimum Element." << std::endl;
    std::cout << "14.Check if Linked List is Empty" << std::endl;

    int choise;
    std::cout << "\nenter operetion: ";
    std::cin >> choise;
    switch (choise) {
    case 0: {
      return 0;
    }
    case 1: {
      front(ll);
      break;
    }
    case 2: {
      back(ll);
      break;
    }
    case 3: {
      pushnth(ll);
      break;
    }
    case 4: {
      ll.pop_front();
      break;
    }
    case 5: {
      ll.pop_back();
      break;
    }
    case 6: {
      ll.pop_nth();
      break;
    }
    case 7: {
      ll.search();
      break;
    }
    case 8: {
      ll.count();
      break;
    }
    case 9: {
      ll.display();
      break;
    }
    case 10: {
      ll.reverse();
      break;
    }
    case 11: {
      ll.find_mid();
      break;
    }
    case 12: {
      ll.max();
      break;
    }
    case 13: {
      ll.min();
      break;
    }
    case 14: {
      ll.check_empty();
      break;
    }
    default: {
      std::cout << "out of range.pls enter the chouse opretion." << std::endl;
    }
    }
  }
}

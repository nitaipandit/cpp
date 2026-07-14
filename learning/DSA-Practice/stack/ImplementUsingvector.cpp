#include <iostream>
#include <vector>
class stack {
public:
  std::vector<int> v;
  void push(int val) { v.push_back(val); }
  void pop() { v.pop_back(); }
  int top() { return v[v.size() - 1]; }

  bool empty() { return v.size() == 0; }
};

void push_insert(stack &s) {
  int x, n, i;
  std::cout << "enter the size of stack: ";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element: ";
    std::cin >> x;
    s.push(x);
  }
}
void display(stack &s) {
  while (!s.empty()) {
    std::cout << s.top() << " ";
    s.pop();
  }
  std::cout << std::endl;
}

int main() {
  stack s;
  while (1) {
    std::cout << "1.push." << std::endl;
    std::cout << "2.Display." << std::endl;
    int choise;
    std::cout << "enter your choise:";
    std::cin >> choise;
    switch (choise) {
    case 1: {
      push_insert(s);
      break;
    }
    case 2: {
      display(s);
    }
    }
  }
}

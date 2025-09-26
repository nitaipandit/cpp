#include <iostream>
#include <stack>
int main() {
  std::stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  std::stack<int> s2;

  s2.swap(s);
  while (!s2.empty()) {
    std::cout << s2.top();
    s2.pop();
  }
  std::cout << std::endl;
}

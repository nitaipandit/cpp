#include <iostream>
#include <queue>
int main() {
  std::priority_queue<int> p;
  p.push(1);
  p.push(5);
  p.push(4);
  p.push(2);
  p.push(3);

  while (!p.empty()) {
    std::cout << p.top() << " ";
    p.pop();
  }
  std::cout << std::endl;
}

#include <iostream>
#include <queue>
int main() {
  std::priority_queue<int, std::vector<int>, std::greater<int>> q;
  q.push(1);
  q.push(5);
  q.push(4);
  q.push(3);
  q.push(2);

  while (!q.empty()) {
    std::cout << q.top() << " ";
    q.pop();
  }
  std::cout << std::endl;
}

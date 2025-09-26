#include <iostream>
#include <queue>
int main() {
  std::queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);

  while (!q.empty()) {
    std::cout << q.front() << " ";
    q.pop();
  }
  std::cout << std::endl;
}

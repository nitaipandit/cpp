#include <iostream>
#include <queue>
int main() {
  std::queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);

  std::queue<int> q2;
  q2.swap(q);

  while (!q2.empty()) {
    std::cout << q2.front() << " ";
    q2.pop();
  }
  std::cout << std::endl;
}

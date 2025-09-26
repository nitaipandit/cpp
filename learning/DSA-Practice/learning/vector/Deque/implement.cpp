#include <deque>
#include <iostream>
int main() {
  std::deque<int> d = {1, 2, 3};
  for (int val : d) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
  std::cout << d[2];
}

#include <iostream>
#include <list>
int main() {
  std::list<int> l;
  l.push_back(1);
  l.push_back(2);
  l.push_front(3);
  l.push_front(4);
  for (int val : l) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
}

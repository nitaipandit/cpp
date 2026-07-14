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
// in deque and list ar similar but in deque we can acess rendom index.but in
// list we cant acess rendom index this is the mejor diffrense in list and
// deque;

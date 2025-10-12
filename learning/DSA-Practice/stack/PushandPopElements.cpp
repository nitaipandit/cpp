#include <iostream>
#include <stack>
int main() {
  std::stack<int> vec;
  vec.push(3);
  vec.push(4);
  vec.push(5);
  vec.push(6);
  vec.pop();
  while (!vec.empty()) {

    std::cout << vec.top() << " ";
    vec.pop();
  }
  std::cout << std::endl;
}

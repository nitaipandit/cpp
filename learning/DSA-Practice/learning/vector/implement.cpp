#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.pop_back();
  for (int val : vec) {
    std::cout << val << " ";
    std::cout << "\n" << std::endl;
  }
  std::cout << "\n" << std::endl;
  return 0;
}

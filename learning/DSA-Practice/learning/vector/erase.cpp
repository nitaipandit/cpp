#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec = {1, 2, 3, 4};
  vec.erase(vec.begin()); // output=234;
  vec.erase(vec.begin() + 2);
  for (int val : vec) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
  return 0;
}

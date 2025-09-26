#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec = {1, 2, 3, 4};
  vec.insert(vec.begin() + 2, 100);
  for (int val : vec) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
  return 0;
}
// so output is = 1,2,100,3,4;

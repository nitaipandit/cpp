#include <algorithm>
#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec = {1, 2, 5, 4, 3};
  std::sort(vec.begin(), vec.end());
  for (int val : vec) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
}

#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec = {1, 2, 3, 4};
  std::vector<int>::iterator it;
  for (auto it = vec.rbegin(); it != vec.rend(); it++) {
    std::cout << *(it) << " ";
  }
  std::cout << std::endl;
}

#include <algorithm>
#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
  sort(vec.begin(), vec.end());

  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
  return 0;
}

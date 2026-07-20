#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec{2, 0, 2, 1, 1, 0};
  int mid = 0, low = 0, hi = vec.size() - 1;
  while (mid <= hi) {
    if (vec[mid] <= 0) {
      std::swap(vec[mid], vec[low]);
    } else if (vec[mid] == 1) {
      mid++;
    } else {
      std::swap(vec[hi], vec[mid]);
    }
  }
  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
}

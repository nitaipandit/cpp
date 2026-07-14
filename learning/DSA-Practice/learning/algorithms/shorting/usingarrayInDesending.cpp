#include <algorithm>
#include <functional>
#include <iostream>
int main() {
  int arr[5] = {5, 3, 1, 2, 4};
  std::sort(arr, arr + 5, std::greater<int>());
  for (int val : arr) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
}

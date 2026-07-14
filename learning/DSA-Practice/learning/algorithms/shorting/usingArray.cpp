#include <algorithm>
#include <iostream>
int main() {
  int arr[5] = {1, 2, 5, 4, 3};
  std::sort(arr, arr + 5);
  for (int val : arr) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
}

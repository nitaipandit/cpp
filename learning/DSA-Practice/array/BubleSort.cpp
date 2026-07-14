#include <iostream>
#include <utility>
int main() {
  int i, n, j, ptr;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    ptr = 0;
    while (ptr < n - 1) {
      if (arr[ptr] > arr[ptr + 1]) {
        std::swap(arr[ptr], arr[ptr + 1]);
      }
      ptr = ptr + 1;
    }
  }
  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
}

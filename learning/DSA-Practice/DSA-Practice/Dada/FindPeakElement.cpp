// Find Peak Element
#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length of element:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  int peak = 0;
  for (i = 0; i < n; i++) {
    if (peak < arr[i]) {
      peak = arr[i];
    }
  }
  std::cout << "peak Element is:" << peak << std::endl;
}

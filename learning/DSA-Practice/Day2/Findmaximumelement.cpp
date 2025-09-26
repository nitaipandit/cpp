#include <iostream>
int main() {
  int i, n, max = 0;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    if (arr[i] >= 0) {
      max = max + arr[i];
    }
  }
  std::cout << "max:" << max;
}

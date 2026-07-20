#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  int j;
  for (i = 0; i < n; i++) {
    std::cout << "entre the element:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        std::swap(arr[j], arr[j + 1]);
      }
    }
  }
  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
}

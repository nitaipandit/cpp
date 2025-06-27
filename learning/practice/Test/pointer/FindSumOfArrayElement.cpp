#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length of array:" << std::endl;
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:" << std::endl;
    std::cin >> arr[i];
  }
  int *ptr = arr;
  int sum = 0;
  for (i = 0; i < n; i++) {
    if (sum <= *ptr) {
      sum = sum + *ptr;
      ptr++;
    }
  }
  std::cout << sum << std::endl;
}

// Prefix sum array {1, 2, 3, 4}	1 3 6 10
#include <iostream>

int main() {
  int i, n, j;
  std::cout << "enter teh length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  for (i = 1; i < n; i++) {
    arr[i] = arr[i] + arr[i - 1];
  }
  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " " << std::endl;
  }
}

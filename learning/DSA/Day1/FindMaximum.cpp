#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  int max = 0;
  for (i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  std::cout << "MAX:" << max << std::endl;
}

#include <iostream>
int main() {
  int n;
  std::cout << "enter the length of array:" << std::endl;
  std::cin >> n;
  int arr[n];
  int i;
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:" << std::endl;
    std::cin >> arr[i];
  }
  int *ptr = arr;
  for (i = 0; i < n; i++) {
    std::cout << *(ptr + i) << std::endl;
  }
}

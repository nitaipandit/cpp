#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length :" << std::endl;
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:" << std::endl;
    std::cin >> arr[i];
  }
  int *ptr = arr;
  for (i = 0; i < n; i++) {
    std::cout << "Address of:" << i << "\t" << (ptr + i) << std::endl;
  }
}

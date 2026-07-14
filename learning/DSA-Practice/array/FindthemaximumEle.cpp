#include <iostream>
int main() {
  int i, a = 0, n = 5;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    if (a < arr[i]) {
      a = arr[i];
    }
  }
  std::cout << a << std::endl;
}

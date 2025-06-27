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
  int add = 0;
  for (i = 0; i < n; i++) {
    add += arr[i];
  }
  std::cout << "SumOfNumber:" << add << std::endl;
}

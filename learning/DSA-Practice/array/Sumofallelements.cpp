//	Sum of all elements
#include <iostream>
int main() {
  int i, n, sum = 0;
  std::cout << "enter teh length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    sum = sum + arr[i];
  }
  std::cout << "sum of elements= " << sum << std::endl;
}

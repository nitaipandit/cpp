// 1. Find Minimum Element Input: 4 2 7 1 9 Output: 1
#include <climits>
#include <iostream>
int main() {
  int n;
  std::cout << "enter the number of element :";
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  int x = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (x > arr[i]) {
      x = arr[i];
    }
  }
  std::cout << "output:" << x << std::endl;
}

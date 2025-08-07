// 34	Find equilibrium index (sum left == sum right)
#include <iostream>
int main() {
  int i, n, j, left = 0, right = 0;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      right = right + arr[j];
    }
    std::cout << right << std::endl;
    std::cout << left << std::endl;
    if (left == right) {
      std::cout << "index find: " << i << std::endl;
      return 0;
    } else {
      left = left + arr[i];
      right = 0;
    }
  }
}

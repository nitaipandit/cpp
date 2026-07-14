// 10. Find Subarray with Given Sum
// Input:
// Array: 1 4 20 3 10 5
// Sum = 33
#include <iostream>
int main() {
  int i, n, sum, x;
  std::cout << "enter the length of araay:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enttre the element:";
    std::cin >> arr[i];
  }
  std::cout << "enter the sum element:";
  std::cin >> x;
  for (i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      sum = 0;
      for (int k = i; k <= j; k++) {
        sum = sum + arr[k];
      }
      if (sum == x) {
        std::cout << "[";
        for (int z = i; z <= j; z++) {
          std::cout << arr[z] << " ";
        }
        std::cout << "]";
        std::cout << std::endl;
      }
    }
  }
}

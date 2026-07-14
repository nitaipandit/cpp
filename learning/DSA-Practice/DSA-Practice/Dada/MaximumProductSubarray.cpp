// 7. Maximum Product Subarray
// Input: 2 3 -2 4
// Output: 6
#include <iostream>
int main() {
  int i, n, j, k, sum = 1, product = 0;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    for (j = i; j < n; j++) {
      sum = 1;
      for (k = i; k <= j; k++) {
        sum = sum * arr[k];
      }
      if (sum > product) {
        product = sum;
      }
    }
  }
  std::cout << product << std::endl;
}

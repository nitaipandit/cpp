// 6. Find All Subarrays
// Input: 1 2 3
// Output:
//`[1], [2], [3], [1,2], [2,3], [1,2,3]
#include <iostream>
int main() {
  int i, n, j, k;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    for (j = i; j < n; j++) {
      std::cout << "[";
      for (k = i; k <= j; k++) {
        std::cout << arr[k];
      }
      std::cout << "],";
    }
  }
}

// 8. Check if Two Arrays are Equal
// Input:
// A: 1 2 3
// B: 3 2 1
// Output: Equal
//
#include <iostream>
int main() {
  int i, n, m;
  std::cout << "enter the length of array 1:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element for array 1:";
    std::cin >> arr[i];
  }
  std::cout << "enter the length of array2:";
  std::cin >> m;
  int arr2[m];
  for (i = 0; i < m; i++) {
    std::cout << "enter the element for array 2:";
    std::cin >> arr2[i];
  }
  int sum1 = 0;
  int sum2 = 0;
  int count = 0;
  for (i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i] == arr2[j]) {
        count++;
      }
    }
  }
  if (count == n) {
    std::cout << "Equal" << std::endl;
  } else {
    std::cout << "NOt Equal." << std::endl;
  }
}

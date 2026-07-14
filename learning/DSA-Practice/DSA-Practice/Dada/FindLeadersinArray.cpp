// 4. Find Leaders in Array
//(Leader = greater than all elements to right)
// Input: 16 17 4 3 5 2
// Output: 17 5 2

#include <iostream>

int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the elemnt:";
    std::cin >> arr[i];
  }
  int max = arr[n - 1];
  for (i = n - 2; i >= 0; i--) {
    if (arr[i] > max) {

      max = arr[i];
      std::cout << max << " ";
    }
  }
}

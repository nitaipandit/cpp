//. Merge Two Sorted Arrays
// Input:
// A: 1 3 5
// B: 2 4 6
// Output: 1 2 3 4 5 6
#include <iostream>
int main() {
  int i, n, m;
  std::cout << "enter the length  of array 1:";
  std::cin >> n;
  int arr1[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr1[i];
  }
  std::cout << "enter the length of array2:";
  std::cin >> m;
  int arr2[m];
  for (int i = 0; i < m; i++) {
    std::cout << "enter the elemnt for array 2:";
    std::cin >> arr2[i];
  }
  int x = n + m;
  int arr3[x];
  for (i = 0; i < n; i++) {
    arr3[i] = arr1[i];
  }
  for (i = 0; i < m; i++) {
    arr3[n + i] = arr2[i];
  }
  for (i = 0; i < x; i++) {
    for (int j = i + 1; j < x; j++) {
      if (arr3[i] > arr3[j]) {
        int temp = arr3[i];
        arr3[i] = arr3[j];
        arr3[j] = temp;
      }
    }
  }
  for (i = 0; i < x; i++) {
    std::cout << arr3[i] << " ";
  }
}

//	Merge two sorted arrays
#include <iostream>
int main() {
  int i, n, temp, j, m;
  // add two array;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  std::cout << "enter the length of second element:";
  std::cin >> m;
  int arr1[m];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of seccond array:";
    std::cin >> arr1[i];
  }
  // merge two array;
  int x = n + m;
  int arr2[x];
  for (i = 0; i < n; i++) {
    arr2[i] = arr[i];
  }
  for (i = 0; i < m; i++) {
    arr2[n + i] = arr1[i];
  }

  // sorted array;
  for (i = 0; i < x; i++) {
    for (j = i + 1; j < x; j++) {
      if (arr2[i] >= arr2[j]) {
        temp = arr2[i];
        arr2[i] = arr2[j];
        arr2[j] = temp;
      }
    }
  }
  for (i = 0; i < x; i++) {
    std::cout << arr2[i] << " ";
  }
}

// 3. Sort Array of 0s, 1s, 2s
// Input: 0 1 2 0 1 2
// Output: 0 0 1 1 2 2

#include <iostream>
void sort(int arr[], int n) {
  int i;
  int low = 0;
  int mid = 0;
  int high = n - 1;
  while (mid <= high) {
    if (arr[mid] == 0) {
      std::swap(arr[mid], arr[low]);
      mid++;
      low++;
    } else if (arr[mid == 1]) {
      mid++;
    } else {
      std::swap(arr[mid], arr[high]);
      high--;
    }
  }
  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
}

int main() {
  int i, n;
  std::cout << "enter the number of element:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  sort(arr, n);
}

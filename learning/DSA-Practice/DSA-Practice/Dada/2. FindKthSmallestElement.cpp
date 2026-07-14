// 2. Find Kth Smallest Element
// Input:
// Array: 7 10 4 3 20 15
// K = 3
// Output: 7
#include <climits>
#include <iostream>

int findmin(int arr[], int y, int n) {
  for (int i = 0; i < n; i++) {
    if (y > arr[i]) {
      y = arr[i];
    }
  }
  return y;
}
int main() {
  int i, n;
  std::cout << "enter the number of element:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the elemnt:";
    std::cin >> arr[i];
  }
  int x;
  int y = INT_MAX;
  std::cout << "enter the key:";
  std::cin >> x;
  while (x != 0) {
    int min = findmin(arr, y, n);
    for (i = 0; i < n; i++) {
      if (arr[i] == min) {
        arr[i] = INT_MAX;
      }
    }
    x--;
    if (x == 0) {
      std::cout << min << std::endl;
    }
  }
}

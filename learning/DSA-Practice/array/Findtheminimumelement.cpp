// Find the minimum element;
#include <iostream>
int findmin(int arr[], int n) {
  int i, a = __INT_MAX__;
  for (i = 0; i < n; i++) {
    if (a > arr[i]) {
      a = arr[i];
    }
  }
  return a;
}
int main() {
  int i, n;
  std::cout << "enter the size of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  int min = findmin(arr, n);
  std::cout << min << std::endl;
}

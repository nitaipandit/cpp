#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n - 1; i++) {
    int small = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[small]) {
        small = j;
      }
    }
    std::swap(arr[i], arr[small]);
  }
  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
}

#include <iostream>
void moveall0s(int arr[], int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    if (arr[i] == 0) {
      for (j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
      }
      arr[n - 1] = 0;
      i--;
      n--;
    }
  }
}
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  moveall0s(arr, n);
  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
}

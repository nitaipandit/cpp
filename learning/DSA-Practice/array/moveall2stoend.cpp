#include <iostream>
void moveall2s(int arr[], int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    if (arr[i] == 2) {
      for (j = i; j < n; j++) {
        arr[j] = arr[j + 1];
      }
      arr[n - 1] = 2;
      n--;
    }
  }
}
int main() {
  int i, n, x;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the valur of array:";
    std::cin >> arr[i];
  }
  moveall2s(arr, n);
  for (i = 0; i < n; i++) {
    std::cout << arr[i];
  }
}

#include <iostream>
void leftrotate(int arr[], int n) {
  int temp = arr[0];
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;
}
void leftrotatentime(int arr[], int n, int r) {
  for (int i = 0; i < r; i++) {
    leftrotate(arr, n);
  }
}
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value:";
    std::cin >> arr[i];
  }
  int r;
  std::cout << "enter the term of rotate:";
  std::cin >> r;
  leftrotatentime(arr, n, r);
  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
}

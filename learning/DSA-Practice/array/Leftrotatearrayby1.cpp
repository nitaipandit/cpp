#include <iostream>
void leftrotate(int arr[], int n) {
  int temp = arr[0], i;
  for (i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;
}
int main() {
  int i, n;
  std::cout << "enter the length of string:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  leftrotate(arr, n);
  std::cout << "after leftrotate one time: ";
  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
}

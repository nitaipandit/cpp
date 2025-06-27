#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the number:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  int temp;
  for (i = 0; i < n / 2; i++) {
    temp = arr[n - i - 1];
    arr[n - i - 1] = arr[i];
    arr[i] = temp;
  }
  for (i = 0; i < n; i++) {
    std::cout << arr[i];
  }
}

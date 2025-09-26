#include <iostream>
int main() {
  int i, n, temp;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n / 2; i++) {
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
}

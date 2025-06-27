#include <iostream>
int main() {
  std::cout << "enter the length of array:" << std::endl;
  int n, i, temp;
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:" << std::endl;
    std::cin >> arr[i];
  }
  for (i = 0; i < n / 2; i++) {
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
  int *ptr = arr;
  for (i = 0; i < n; i++) {
    std::cout << *(ptr + i);
  }
}

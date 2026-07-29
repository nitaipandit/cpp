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
  int tar;
  std::cout << "enter the target value:";
  std::cin >> tar;
  for (i = 0; i < n; i++) {
    int first = arr[i];
    for (j = i + 1; j < n; j++) {
      int second = arr[j];
      int sum = first + second;
      if (tar == sum) {
        std::cout << arr[i] << " " << arr[j] << std::endl;
      }
    }
  }
}

//	Find first missing positive number
#include <iostream>
int main() {
  int i, n, j, temp;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] >= arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (i = 0; i < n; i++) {
    if (arr[i] != arr[i + 1]) {
      if (arr[i] >= 1) {
        std::cout << arr[i + 1];
        return 0;
        std::cout << std::endl;
      }
    }
  }
}

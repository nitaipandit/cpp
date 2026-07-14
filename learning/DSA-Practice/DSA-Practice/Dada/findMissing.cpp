#include <iostream>
int main() {
  int i, n, j;
  std::cout << "entre the length:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    int x = i;
    for (j = i + 1; j < n; j++) {
      if (arr[i] == arr[j] && x != arr[i + 1]) {
        std::cout << arr[i + 1] << std::endl;
        std::cout << arr[i] << std::endl;
      }
    }
  }
}

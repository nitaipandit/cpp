#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  int key;
  std::cout << "enter the key: ";
  std::cin >> key;
  for (i = 0; i < n; i++) {
    if (arr[i] == key) {
      std::cout << "index: " << i << std::endl;
      return 0;
    }
  }
}

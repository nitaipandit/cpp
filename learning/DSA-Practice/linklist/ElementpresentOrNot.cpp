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
  int min = 0;
  int max = n - 1;
  int key, flag = 0;
  std::cout << "enter the key:";
  std::cin >> key;
  while (min <= max) {
    int mid = min + (max - 1) / 2;
    if (arr[mid] == key) {
      flag = 1;
      break;
    } else if (arr[mid] < key) {
      min = mid + 1;
    } else {
      max = mid - 1;
    }
  }
  if (flag == 1) {
    std::cout << "Element Found." << std::endl;
  } else {
    std::cout << "Element Not Found." << std::endl;
  }
}

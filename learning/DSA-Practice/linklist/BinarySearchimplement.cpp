#include <iostream>
int main() {
  int min, max, mid;
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  min = 0;
  max = n - 1;
  int key;
  std::cout << "enter the element to search:";
  std::cin >> key;
  while (min <= max) {
    mid = min + (max - 1) / 2;
    if (arr[mid] == key) {
      std::cout << "Element Found at Index " << mid << std::endl;
      return 0;
    } else if (arr[mid] < key) {
      min = mid + 1;
    } else {
      max = mid - 1;
    }
  }
}

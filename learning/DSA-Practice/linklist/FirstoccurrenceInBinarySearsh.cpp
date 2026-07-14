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
  int key, x;
  std::cout << "enter the key:";
  std::cin >> key;
  while (min <= max) {
    int mid = min + (max - min) / 2;
    if (arr[mid] == key) {
      x = mid;
      max = mid - 1;
    } else if (arr[mid] < key) {
      min = mid + 1;
    } else {
      max = mid - 1;
    }
  }
  std::cout << "First Occurrence at Index " << x << std::endl;
}

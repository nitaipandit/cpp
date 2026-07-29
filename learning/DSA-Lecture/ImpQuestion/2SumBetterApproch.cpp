#include <algorithm>
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
  int first = 0;
  int second = n - 1;
  int tar;
  std::sort(arr, arr + n);
  std::cout << "enter the target element:";
  std::cin >> tar;
  while (first < second) {
    int sum = arr[first] + arr[second];
    if (sum == tar) {
      std::cout << arr[first] << " " << arr[second] << std::endl;
      break;
    } else if (sum > tar) {
      second--;
    } else {
      first++;
    }
  }
}

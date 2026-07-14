#include <iostream>
int main() {
  int n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cout << "Enter the element:";
    std::cin >> arr[i];
  }
  int tar;
  std::cout << "Enter the target:";
  std::cin >> tar;
  int st = 0;
  int end = n - 1;
  int ans;

  while (st <= end) {
    int mid = (st + end) / 2;
    if (tar > arr[mid]) {
      st = mid + 1;
    } else if (tar < arr[mid]) {

      end = mid - 1;
    } else {
      ans = mid;
      break;
    }
  }
  std::cout << ans << std::endl;
}

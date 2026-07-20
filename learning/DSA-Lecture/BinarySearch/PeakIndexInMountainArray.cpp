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
  int st = 1, end = n - 2, ans;
  while (st <= end) {
    int mid = st + (end - st) / 2;
    if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
      ans = arr[mid];
      break;
    }
    if (arr[mid - 1] < arr[mid]) {
      st = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  std::cout << ans;
}

#include <iostream>

int Bs(int arr[], int tar, int st, int end) {
  int mid = (st + (end - st)) / 2;
  if (tar > arr[mid]) {
    return Bs(arr, tar, mid + 1, end);
  } else if (tar < arr[mid]) {
    return Bs(arr, tar, st, mid - 1);
  } else {
    return mid;
  }
}
int main() {
  int i, n;
  std::cout << "enter the length of array";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  int tar;
  std::cout << "enter the target:";
  std::cin >> tar;
  int st = 0;
  int end = n - 1;
  int ans = Bs(arr, tar, st, end);
  std::cout << ans << std::endl;
}

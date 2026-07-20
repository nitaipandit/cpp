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
  int st = 0;
  int end = n - 1;
  int ans;
  while (st <= end) {
    int mid = st + (end - st) / 2;
    if (mid == 0 && arr[0] != arr[1]) {
      ans = arr[mid];
      break;
    }
    if (mid == n - 1 && arr[n - 1] != arr[n - 2]) {
      ans = arr[mid];
      break;
    }
    if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1]) {
      ans = arr[mid];
      break;
    }
    if (mid % 2 == 0) {
      if (arr[mid - 1] == arr[mid]) {
        end = mid - 1;
      } else {
        st = mid + 1;
      }
    } else {
      if (arr[mid - 1] == arr[mid]) {
        st = mid + 1;

      } else {
        end = mid - 0;
      }
    }
  }
  std::cout << ans << std::endl;
}

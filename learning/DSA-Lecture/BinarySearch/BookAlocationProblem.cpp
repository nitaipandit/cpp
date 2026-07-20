#include <iostream>

bool isvalid(int arr[], int n, int m, int maxAllowedPages) {
  int stu = 1, pages = 0, i;
  for (i = 0; i < n; i++) {
    if (arr[i] > maxAllowedPages) {
      return false;
    }
    if (pages + arr[i] <= maxAllowedPages) {
      pages += arr[i];
    } else {
      stu++;
      pages = arr[i];
    }
  }

  if (stu > m) {
    return false;
  } else {
    return true;
  }
}

int alocationBook(int arr[], int n, int m) {
  if (m > n) {
    return -1;
  }

  int ans = -1;
  int st = 0, i;
  int sum = 0;
  for (i = 0; i < n; i++) {
    sum += arr[i];
  }
  int end = sum;

  while (st <= end) {
    int mid = st + (end - st) / 2;
    if (isvalid(arr, n, m, mid)) { // left
      ans = mid;
      end = mid - 1;
    } else { // right
      st = mid + 1;
    }
  }
  return ans;
}
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enteer the element:";
    std::cin >> arr[i];
  }
  int st = 0;
  int end = 0;
  int m;

  std::cout << "enter the number of student:";
  std::cin >> m;
  std::cout << alocationBook(arr, n, m) << std::endl;
}

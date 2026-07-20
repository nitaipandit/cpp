#include <iostream>

bool isvalid(int arr[], int n, int m, int mid) {
  int panter = 1;
  int bords = 0;
  int i;

  for (i = 0; i < n; i++) {
    if (arr[i] > mid) {
      return false;
    }
    if (bords + arr[i] <= mid) {
      bords += arr[i];
    } else {
      panter++;
      bords = arr[i];
    }
  }
  if (panter > m) {
    return false;
  } else {
    return true;
  }
}

int partition(int arr[], int n, int m) {
  int st = 0;
  int sum = 0;
  int i;
  for (i = 0; i < n; i++) {
    sum += arr[i];
  }
  int end = sum;
  int ans;
  while (st <= end) {
    int mid = st + (end - st) / 2;
    if (isvalid(arr, n, m, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      st = mid + 1;
    }
  }
  return ans;
}
int main() {

  int i, n;
  std::cout << "enter the length OF Bords:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the number of bords:";
    std::cin >> arr[i];
  }
  int m;
  std::cout << "enter Number of panters:";
  std::cin >> m;
  std::cout << partition(arr, n, m) << std::endl;
}

#include <algorithm>
#include <iostream>

bool ispossible(int arr[], int n, int c, int minAllowed) {
  int cows = 1, laststall = arr[0];
  int i;
  for (i = 1; i < n; i++) {
    if (arr[i] - laststall >= minAllowed) {
      cows++;
      laststall = arr[i];
    }
    if (cows == c) {
      return true;
    }
  }
  return false;
}
int Aggressive(int arr[], int n, int c) {
  std::sort(arr, arr + n);
  int st = 1, end = arr[n - 1] - arr[0], ans = -1;

  while (st <= end) {
    int mid = st + (end - st) / 2;
    if (ispossible(arr, n, c, mid)) {
      ans = mid;
      st = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return ans;
}
int main() {
  int i, n;
  std::cout << "enter the Number of stall:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element of stall:";
    std::cin >> arr[i];
  }

  int c;
  std::cout << "enter the Number of cows:";
  std::cin >> c;
  std::cout << Aggressive(arr, n, c) << std::endl;
}

#include <iostream>

int findroot(int n) {
  int min = 0;
  int max = n;
  int ans = 0;
  while (min <= max) {
    int mid = min + (max - min) / 2;
    if (mid * mid == n) {
      return mid;
    } else if (mid * mid < n) {
      ans = mid;
      min = mid + 1;
    } else {
      max = mid - 1;
    }
  }
  return ans;
}
int main() {
  int n;
  std::cout << "enter the NUmber:";
  std::cin >> n;
  std::cout << findroot(n) << std::endl;
}

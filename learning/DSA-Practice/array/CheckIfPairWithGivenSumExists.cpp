// Check if pair with given sum exists
#include <iostream>
int main() {
  int i, n, j, sum;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  std::cout << "enter the sum of number :";
  std::cin >> sum;

  int l = 0;
  int r = n - 1;
  int currentsum = 0;
  while (l < r) {
    currentsum = arr[l] + arr[r];
    if (currentsum == sum) {
      std::cout << "pairs found:" << arr[l] << " + " << arr[r] << std::endl;
      return 0;
    } else if (currentsum < sum) {
      l++;
    } else {
      r--;
    }
  }
}

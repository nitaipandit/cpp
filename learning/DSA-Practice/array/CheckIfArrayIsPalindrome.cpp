//	Check if array is palindrome#
#include <iostream>
int main() {
  int i, n, j, sum = 0, c = 0;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n / 2; i++) {
    for (j = n - 1; j > n / 2; j--) {
      if (arr[i] == arr[j]) {
        c++;
      }
    }
  }
  sum = n / 2;
  if (c == sum) {
    std::cout << "yes." << std::endl;
  } else {
    std::cout << "noo." << std::endl;
  }
}

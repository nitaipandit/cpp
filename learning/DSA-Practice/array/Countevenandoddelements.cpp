//	Count even and odd elements 1, 2, 3, 4, 5, 6}	Even: 3, Odd: 3
#include <iostream>
int main() {
  int i, n, even = 0, odd = 0;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    if (arr[i] %= 2) {
      even++;
    } else {
      odd++;
    }
  }
  std::cout << "even = " << even << std::endl;
  std::cout << "odd = " << odd << std::endl;
}

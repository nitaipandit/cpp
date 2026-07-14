#include <iostream>
int main() {
  int i, n, even = 0, odd = 0;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element at index " << i << " :";
    std::cin >> arr[i];
    if (arr[i] % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }
  std::cout << "Even In Array:" << even << std::endl;
  std::cout << "Odd in Array:" << odd << std::endl;
}

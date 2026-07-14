#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n], zero = 0, positive = 0, nagative = 0;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element at index " << i << " :";
    std::cin >> arr[i];
    if (arr[i] <= -1) {
      nagative++;
    } else if (arr[i] >= 1) {
      positive++;
    } else {
      zero++;
    }
  }
  std::cout << "Positive: " << positive << std::endl;
  std::cout << "Nagative: " << nagative << std::endl;
  std::cout << "Zero: " << zero << std::endl;
}

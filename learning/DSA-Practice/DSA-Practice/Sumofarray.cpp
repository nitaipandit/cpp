// Total sum of array.
#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  int max = 0;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element at index " << i << ":";
    std::cin >> arr[i];
    max = max + arr[i];
  }
  std::cout << "Total Sum:" << max << std::endl;
}

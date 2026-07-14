#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  int prefix[n];
  prefix[0] = arr[0];
  for (i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
  }
  for (i = 0; i < n; i++) {
    std::cout << prefix[i] << " ";
  }
}

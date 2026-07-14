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
  int x;
  int sum = prefix[0];
  std::cout << "enter the lenght for count prefix sum.";
  std::cin >> x;
  for (i = 1; i < x; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
    sum = sum + prefix[i];
  }
  std::cout << "Total " << x << " length of sum = " << sum << std::endl;
}

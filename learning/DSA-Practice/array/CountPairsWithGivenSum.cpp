//	Count pairs with given sum  	arr = {1, 5, 7, -1, 5}, sum = 6	3 pairs
#include <iostream>
int main() {
  int i, n, j, sum, pair = 0;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  std::cout << "enter the sum of number:";
  std::cin >> sum;
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n - 1; j++) {
      if (sum == arr[i] + arr[j] || sum == arr[i] - arr[j]) {
        pair++;
      }
    }
  }
  std::cout << "sum =" << sum << " -> " << pair << " pair" << std::endl;
}

#include <climits>
#include <iostream>
int main() {
  int i, n, minelement = INT_MAX;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element at index " << i << " :";
    std::cin >> arr[i];
    if (minelement > arr[i]) {
      minelement = arr[i];
    }
  }
  std::cout << "MinELement in array:" << minelement << std::endl;
}

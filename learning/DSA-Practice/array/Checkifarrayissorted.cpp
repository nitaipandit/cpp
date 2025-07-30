// Check if array is sorted	{1, 2, 2, 4, 5}	Sorted
#include <iostream>
int main() {
  int i, j, temp = 1, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] >= arr[i + 1]) {
        temp = 0;
        break;
      }
    }
  }
  if (temp == 0) {
    std::cout << "array is unshorted." << std::endl;
  } else {
    std::cout << "array is shorted." << std::endl;
  }
}

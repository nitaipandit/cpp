//	Check if array contains duplicate
#include <iostream>
int main() {
  int i, n, j, dupli = 1;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        dupli = 0;
      }
    }
  }
  if (dupli == 0) {
    std::cout << "yes duplicate element are valid." << std::endl;
  } else {
    std::cout << "no duplicate element are valid." << std::endl;
  }
}

#include <climits>
#include <iostream>
int main() {
  int i, n, j, max = 0;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  int z;
  for (i = 0; i < n; i++) {
    for (j = i; j < n; j++) {
      z = 0;
      for (int x = i; x <= j; x++) {
        std::cout << arr[x];
        z = z + arr[x];
      }
      std::cout << " ";
    }
    if (z >= max) {
      max = z;
    }
    std::cout << "    " << max;
    std::cout << std::endl;
  }
  std::cout << "\n" << max << std::endl;
}

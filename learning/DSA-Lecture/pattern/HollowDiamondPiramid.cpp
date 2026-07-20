#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i - 1; j++) {
      std::cout << " ";
    }
    std::cout << "*";
    if (i != 0) {
      for (j = 0; j < 2 * i - 1; j++) {
        std::cout << " ";
      }
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < i + 1; j++) {
      std::cout << " ";
    }
    std::cout << "*";
    if (i != n - 2) {
      for (j = 0; j < 2 * (n - 2 - i) - 1; j++) {
        std::cout << " ";
      }
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

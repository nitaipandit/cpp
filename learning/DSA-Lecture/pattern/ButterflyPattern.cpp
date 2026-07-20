#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    for (j = 0; j < i + 1; j++) {
      std::cout << "*";
    }
    for (j = 0; j < n - 1; j++) {
      std::cout << " ";
    }
    for (j = 0; j < n - 1; j++) {
      std::cout << " ";
    }
    for (j = 0; j < i + 1; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

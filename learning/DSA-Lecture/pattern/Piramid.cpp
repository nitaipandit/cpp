#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    // space.
    for (j = 0; j < n - i - 1; j++) {
      std::cout << " ";
    }
    // num1;
    for (j = 1; j <= i + 1; j++) {
      std::cout << j;
    }
    // num2;
    for (j = i; j > 0; j--) {
      std::cout << j;
    }
    std::cout << std::endl;
  }
}

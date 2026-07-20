#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    for (j = 0; j < i; j++) {
      std::cout << " ";
    }
    for (j = 0; j < n - i; j++) {
      std::cout << i + 1;
    }
    std::cout << std::endl;
  }
}

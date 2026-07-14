#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    for (j = i + 1; j > 0; j--) {
      std::cout << j << " ";
    }
    std::cout << std::endl;
  }
}

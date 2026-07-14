#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length:";
  std::cin >> n;
  for (i = 1; i <= n; i++) {
    for (j = i; j > 0; j--) {
      std::cout << j << " ";
    }
    std::cout << std::endl;
  }
}

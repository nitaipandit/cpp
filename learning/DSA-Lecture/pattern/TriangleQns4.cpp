#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length:";
  std::cin >> n;
  for (i = 0; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      std::cout << j << " ";
    }
    std::cout << std::endl;
  }
}

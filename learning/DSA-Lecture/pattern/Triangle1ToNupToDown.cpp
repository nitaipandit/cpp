#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length:";
  std::cin >> n;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      std::cout << i << " ";
    }
    std::cout << std::endl;
  }
}

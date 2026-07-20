#include <iostream>
int main() {
  int i, n, j, x;
  std::cout << "enter the length:";
  std::cin >> n;
  x = 1;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      std::cout << x << " ";
      x++;
    }
    std::cout << std::endl;
  }
}

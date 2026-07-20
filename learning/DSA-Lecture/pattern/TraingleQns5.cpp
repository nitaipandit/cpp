#include <iostream>
int main() {
  int n, i, j, x;
  std::cout << "enter the length:";
  std::cin >> n;
  for (i = 1; i <= n; i++) {
    x = 1;
    for (j = 1; j <= i; j++) {
      std::cout << x << " ";
      x++;
    }
    std::cout << std::endl;
  }
}

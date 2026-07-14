#include <iostream>
int main() {
  int i, n, j;
  char ch = 'A';
  std::cout << "enter the length:";
  std::cin >> n;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      std::cout << ch << " ";
      ch = ch + 1;
    }
    std::cout << std::endl;
  }
}

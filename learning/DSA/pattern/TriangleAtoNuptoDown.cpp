#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length:";
  std::cin >> n;
  char ch = 'A';
  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      std::cout << ch << " ";
    }
    ch = ch + 1;
    std::cout << std::endl;
  }
}

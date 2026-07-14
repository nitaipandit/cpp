#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    char ch = 'A';

    for (j = 1; j <= n; j++) {
      std::cout << ch << " ";
      ch = ch + 1; // 65+1=66=B;
    }
    std::cout << std::endl;
  }
}

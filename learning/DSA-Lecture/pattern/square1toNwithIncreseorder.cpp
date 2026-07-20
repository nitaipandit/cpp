#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length:";
  std::cin >> n;
  int temp = 1;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      std::cout << temp << " ";
      temp = temp + 1;
    }
    std::cout << std::endl;
  }
}

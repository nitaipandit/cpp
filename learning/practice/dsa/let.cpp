#include <iostream>
int main() {

  int x;
  std::cout << "enter the length:";
  std::cin >> x;
  int i, j;
  for (i = 0; i <= x; i++) {
    if (i % 2 == 0) {
      for (j = i; j >= 1; j--) {
        std::cout << j;
        if (j != 1) {
          std::cout << "#";
        }
      }
    } else {
      for (j = 1; j <= i; j++) {
        std::cout << j;
        if (j != 1) {
          std::cout << "#";
        }
      }
    }
    std::cout << std::endl;
  }
  for (i = x - 1; i >= 1; i--) {
    if (i % 2 == 0) {
      for (j = i; j >= 1; j--) {
        std::cout << j;
        if (j != 1) {
          std::cout << "#";
        }
      }
    } else {
      for (j = 1; j <= i; j++) {
        std::cout << j;
        if (j != 1) {
          std::cout << "#";
        }
      }
    }
    std::cout << std::endl;
  }
}

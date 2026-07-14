#include <iostream>

int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  int n;
  int i = 0;
  std::cout << "enter the number:";
  std::cin >> n;
  std::cout << "factorial" << factorial(n) << std::endl;
}

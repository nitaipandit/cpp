#include <iostream>
int main() {
  int a;
  std::cout << "enter a number:" << std::endl;
  std::cin >> a;
  int *ptr = &a;
  std::cout << "print using pointer:" << *ptr << std::endl;
  return 0;
}

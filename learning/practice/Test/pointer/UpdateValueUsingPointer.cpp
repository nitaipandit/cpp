#include <iostream>
int main() {
  int a = 10;
  int *ptr = &a;
  int b;
  std::cout << "enter the update number:" << std::endl;
  std::cin >> b;
  *ptr = *ptr + b;
  std::cout << *ptr << std::endl;
}

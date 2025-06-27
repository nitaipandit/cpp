#include <iostream>
int main() {
  float a = 3.14;
  // std::cout << "enter number:" << std::endl;
  // std::cin >> a;
  float *ptr = &a;
  std::cout << *ptr << std::endl;
}

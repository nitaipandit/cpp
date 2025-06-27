#include <iostream>
void changevalue(int *ptr) { *ptr = 100; }
int main() {
  int x;
  std::cout << "enter the vaue:" << std::endl;
  std::cin >> x;
  std::cout << "print Before change:" << x << std::endl;
  changevalue(&x);
  std::cout << "print after change:" << x << std::endl;
}

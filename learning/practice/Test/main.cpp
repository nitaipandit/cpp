#include "01.h"
#include <iostream>

int main() {
  Number a(2);
  Number b(3);
  Number c(10);
  std::cout << a.getnum() << std::endl;
  std::cout << b.getnum() << std::endl;
  std::cout << (a + b + c).getnum() << " | " << a.add(b) << std::endl;
  // a+b => a.operator+(b) => return a Number
  // (a+b) + c  => (a+b).operator+(c);

  // std::cout.operator<<(Number) => a+b return a Number type object
  std::cout << a + b << b + c << std::endl;

  // a-b => a.operator-(b);
  // a*b => a.operator*(b);
}

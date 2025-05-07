#include "math.h"
#include <iostream>
int main() {
  Math m;
  int a, b;
  std::cout << "enter a firts number:";
  std::cin >> a;
  std::cout << "enter a second number:";
  std::cin >> b;
  int result = m.add(a, b);
  std::cout << "result:" << result << std::endl;
}

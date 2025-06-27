#include <iostream>
int main() {
  int i;
  int x;
  std::cout << "enter the number:";
  std::cin >> x;
  if (x % 2 == 0) {
    std::cout << "number is even." << std::endl;
  } else {
    std::cout << "number is odd." << std::endl;
  }
}

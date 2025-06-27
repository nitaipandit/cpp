#include <iostream>
int main() {
  char name;
  char *ptr = &name;
  std::cout << "enter name:" << std::endl;
  std::cin >> *ptr;
  std::cout << *ptr << std::endl;
}

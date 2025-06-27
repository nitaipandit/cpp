#include <iostream>
int main() {
  int *ptr = new int;
  *ptr = 20;
  std::cout << *ptr << std::endl;
  delete ptr;
  ptr = nullptr;
}

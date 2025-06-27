#include <iostream>
int main() {
  int a = 10;
  int *ptr = &a;
  std::cout << ptr << std::endl;  // print stored address of a;
  std::cout << &ptr << std::endl; // print address of ptr;
}

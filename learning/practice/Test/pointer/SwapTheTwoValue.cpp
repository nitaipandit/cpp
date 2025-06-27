#include <iostream>

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
int main() {
  int a, b;
  std::cout << "enter the first number:";
  std::cin >> a;
  std::cout << "enter the second number:";
  std::cin >> b;

  std::cout << "before swap:" << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << "after swaping:" << std::endl;
  swap(&a, &b);
  std::cout << a << std::endl;
  std::cout << b << std::endl;
}

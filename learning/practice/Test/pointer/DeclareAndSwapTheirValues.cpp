#include <iostream>
int main() {
  int a, b, temp;
  std::cout << "enter first number:" << std::endl;
  std::cin >> a;
  std::cout << "enter second Number:" << std::endl;
  std::cin >> b;
  int *ptr = &a;
  int *ptr2 = &b;
  std::cout << "before swaping first number:" << *ptr << std::endl;
  std::cout << "before swaping second number:" << *ptr2 << std::endl;
  temp = *ptr;
  *ptr = *ptr2;
  *ptr2 = temp;
  std::cout << "after swaping first number:" << *ptr << std::endl;
  std::cout << "after swaping second number:" << *ptr2 << std::endl;
}

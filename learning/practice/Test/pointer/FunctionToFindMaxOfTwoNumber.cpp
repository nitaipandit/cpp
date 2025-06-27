#include <iostream>
int FindMax(int *ptr1, int *ptr2) {
  if (*ptr1 > *ptr2) {
    return *ptr1;
  } else {
    return *ptr2;
  }
}
int main() {
  int a, b;
  std::cout << "enter the first number:";
  std::cin >> a;
  std::cout << "enter the second number:";
  std::cin >> b;
  int *ptr1 = &a;
  int *ptr2 = &b;
  int result = FindMax(ptr1, ptr2);
  std::cout << result << std::endl;
}

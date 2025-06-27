#include <iostream>
void swapvalue(int *ptr, int *ptr2) {
  int temp;
  temp = *ptr;
  *ptr = *ptr2;
  *ptr2 = temp;
}
int main() {
  int x, y;
  std::cout << "enter the value of x:" << std::endl;
  std::cin >> x;
  std::cout << "enter the value of y:" << std::endl;
  std::cin >> y;
  std::cout << "before swaping the value of x&y:" << x << y << std::endl;
  swapvalue(&x, &y);
  std::cout << "after swaping the value: X&y:" << x << y << std::endl;
}

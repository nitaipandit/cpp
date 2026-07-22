#include <iostream>
int main() {
  int num;
  std::cout << "enter the number:";
  std::cin >> num;
  int sum = 0;
  while (num != 0) {
    int digits = num % 10;
    sum += digits;
    num = num / 10;
  }
  std::cout << "Sum of Number = " << sum << std::endl;
}

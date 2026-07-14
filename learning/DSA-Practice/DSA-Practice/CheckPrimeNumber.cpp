#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the Number:";
  std::cin >> n;
  if (n == 2 || n % 2 != 0) {
    std::cout << "Number id prime." << std::endl;
    return 0;
  } else {
    std::cout << "Number is Not Prime." << std::endl;
    return 0;
  }
}

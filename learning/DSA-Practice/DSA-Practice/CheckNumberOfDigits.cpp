#include <iostream>
int main() {
  int count = 0, n;
  std::cout << "Enter the Number:";
  std::cin >> n;
  while (n != 0) {
    n = n / 10;
    count++;
  }
  std::cout << "Total Digits:" << count << std::endl;
}

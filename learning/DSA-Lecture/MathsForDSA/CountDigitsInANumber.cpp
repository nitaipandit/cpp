#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the Number:";
  std::cin >> n;
  int count = 0;
  while (n != 0) {
    count++;
    n = n / 10;
  }
  std::cout << count << std::endl;
}

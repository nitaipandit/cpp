#include <iostream>
int main() {
  char str[20];
  std::cout << "enter the string:" << std::endl;
  std::cin >> str;
  char *ptr = str;
  while (*ptr != '\0') {
    std::cout << *ptr << std::endl;
    ptr++;
  }
}

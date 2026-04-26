#include <iostream>
int main() {
  int i, n;
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  n = str.length();
  for (i = n - 1; i >= 0; i--) {
    std::cout << str[i];
  }
}

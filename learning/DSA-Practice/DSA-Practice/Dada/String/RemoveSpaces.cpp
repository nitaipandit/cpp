#include <iostream>
int main() {
  std::string str;
  int i, n;
  std::cout << "enter the string:";
  getline(std::cin, str);
  n = str.length();
  for (i = 0; i < n; i++) {
    if (str[i] != ' ') {
      std::cout << str[i];
    }
  }
  std::cout << std::endl;
}

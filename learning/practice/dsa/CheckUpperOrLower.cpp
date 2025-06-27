#include <iostream>
int main() {
  char ch;
  std::cout << "enter the character:";
  std::cin >> ch;
  if (ch >= 'A' && ch <= 'Z') {
    std::cout << "character is uppercase.";
  } else if (ch >= 'a' && ch <= 'z') {
    std::cout << "character is lowercase." << std::endl;
  }
}

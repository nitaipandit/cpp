#include <iostream>

int main() {
  char name[20];
  std::cout << "enter the string:";
  std::cin >> name;
  char *ptr = name;
  int length = 0;
  while (*ptr != '\0') {
    length++;
    ptr++;
  }
  std::cout << length << std::endl;
}

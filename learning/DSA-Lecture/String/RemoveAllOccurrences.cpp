#include <iostream>
int main() {
  std::string str;
  std::string substr;
  std::cout << "enter the string:";
  getline(std::cin, str);

  std::cout << "enter the Substrinng:";
  getline(std::cin, substr);
  int x = str.find(substr);
  str.erase(x, substr.size());
  std::cout << str;
  std::cout << std::endl;
}

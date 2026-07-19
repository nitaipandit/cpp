#include <iostream>
int main() {
  std::string str;
  std::cout << "enter the string:";
  getline(std::cin, str);
  int i = 0, j = str.size() - 1;
  while (i < j) {
    std::swap(str[i], str[j]);
    i++;
    j--;
  }
  for (char ch : str) {
    std::cout << ch << " ";
  }
  std::cout << std::endl;
}

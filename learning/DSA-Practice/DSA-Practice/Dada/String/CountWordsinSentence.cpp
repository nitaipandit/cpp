
#include <iostream>
int main() {
  int i, n;
  std::string str;
  std::cout << "enter the string:";
  getline(std::cin, str);
  n = str.length();
  int count = 0;
  for (i = 0; i < n; i++) {
    if (str[i] == ' ') {
      count++;
    }
  }
  std::cout << count << std::endl;
}

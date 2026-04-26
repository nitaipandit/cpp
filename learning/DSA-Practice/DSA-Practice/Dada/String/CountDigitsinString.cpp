// Count Digits in String
#include <iostream>
int main() {
  int i, n, count = 0;
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  n = str.length();
  for (i = 0; i < n; i++) {
    if (str[i] >= '0' && str[i] <= '9') {
      count++;
    }
  }
  std::cout << "Total NUmber of digits = " << count << std::endl;
}

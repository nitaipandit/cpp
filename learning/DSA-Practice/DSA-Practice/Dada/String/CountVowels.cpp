#include <iostream>
int main() {
  int i, n;
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  n = str.length();
  int count = 0;
  for (i = 0; i < n; i++) {
    if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||
        str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' ||
        str[i] == 'u' || str[i] == 'U') {
      count++;
    }
  }
  std::cout << "Total Number of vowels =" << count << std::endl;
}

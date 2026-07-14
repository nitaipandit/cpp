// Remove All Adjacent Duplicates
// Input: aabbccdde
// Output: e
#include <iostream>
int main() {
  int i, n;
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  n = str.length();
  int frequancy[256] = {0};
  for (i = 0; i < n; i++) {
    frequancy[str[i]]++;
  }
  for (i = 0; i < n; i++) {
    if (frequancy[str[i]] >= 2) {
      str[i] = 0;
    }
  }
  std::cout << str << std::endl;
}

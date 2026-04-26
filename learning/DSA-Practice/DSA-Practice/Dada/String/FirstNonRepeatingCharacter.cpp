// First Non-Repeating Character
// Input: aabbcde
// Output: c
#include <iostream>
int main() {
  int i, n, j;
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  n = str.length();
  int count[256] = {0};
  for (i = 0; i < n; i++) {
    count[str[i]]++;
  }
  for (i = 0; i < n; i++) {
    if (count[str[i]] == 1) {
      std::cout << "First Repeating: " << str[i];
      break;
    }
  }
  std::cout << std::endl;
}

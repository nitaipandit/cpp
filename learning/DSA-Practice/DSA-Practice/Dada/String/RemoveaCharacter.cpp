// 16. Remove a Character
// Input:
// String: hello
// Remove: l
// Output: heo
#include <iostream>
int main() {
  int i, n;
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  n = str.length();
  char c;
  std::cout << "enter the character:";
  std::cin >> c;
  for (i = 0; i < n; i++) {
    if (str[i] != c) {
      std::cout << str[i];
    }
  }
  std::cout << std::endl;
}

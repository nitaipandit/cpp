// 14. Find Last Character
// Input: hello
// Output: o
#include <iostream>
int main() {
  int i, n;
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  n = str.length();
  for (i = 0; i < n; i++) {
    if (i == n - 1) {
      std::cout << str[i] << std::endl;
    }
  }
}

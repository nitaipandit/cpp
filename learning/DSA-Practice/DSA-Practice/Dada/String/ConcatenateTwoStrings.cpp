// 12. Concatenate Two Strings
// Input:
// s1 = hello
// s2 = world
#include <iostream>
int main() {
  int i, n, m, x;
  std::string str1, str2, str3;
  std::cout << "enter the string 1:";
  std::cin >> str1;
  std::cout << "enter the string 2:";
  std::cin >> str2;
  n = str1.length();
  m = str2.length();
  x = n + m;
  for (i = 0; i < x; i++) {
    str3[i] = str1[i];
  }
  for (i = 0; i < x; i++) {
    str3[n + i] = str2[i];
  }
  for (i = 0; i < x; i++) {
    std::cout << str3[i];
  }
  std::cout << std::endl;
}

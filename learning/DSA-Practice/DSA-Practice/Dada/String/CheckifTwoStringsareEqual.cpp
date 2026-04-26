// 11. Check if Two Strings are Equal
// Input:
// s1 = hello
// s2 = hello
// Output: Equal
#include <iostream>
int main() {
  int i, n, m, count = 0;
  std::string str1;
  std::string str2;
  std::cout << "enter the string 1:";
  std::cin >> str1;
  std::cout << "enter the string 2:";
  std::cin >> str2;
  n = str1.length();
  m = str2.length();
  for (i = 0; i < n; i++) {
    if (str1[i] == str2[i]) {
      count++;
    }
  }
  if (count == n || count == m) {
    std::cout << "Equal." << std::endl;
  } else {
    std::cout << "NotEqual." << std::endl;
  }
}

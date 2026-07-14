// Check Rotation of String
// Input:
// s1 = abcde
// s2 = cdeab
// Output: Yes
#include <iostream>
int main() {
  int i, n, m;
  std::string str1, str2;
  std::cout << "enter the String 1:";
  std::cin >> str1;
  std::cout << "enter the String 2:";
  std::cin >> str2;
  n = str1.length();
  m = str2.length();
  if (n != m) {
    std::cout << "NO" << std::endl;
    return 0;
  }
  std::string temp = str1 + str2;
  if (temp.find(str2) != -1) {
    std::cout << "YES." << std::endl;
  } else {
    std::cout << "No." << std::endl;
  }
}

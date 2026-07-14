// Check Rotation of String
// Input:
// s1 = abcde
// s2 = cdeab
#include <iostream>
int main() {
  std::string s1;
  std::string s2;
  std::cout << "enter the string 1:";
  std::cin >> s1;
  std::cout << "enter the string 2:";
  std::cin >> s2;

  std::string temp = s1 + s2;
  if (s1.length() != s2.length()) {
    std::cout << "Not Rotation." << std::endl;
    return 0;
  }
  if (temp.find(s2) != -1) {
    std::cout << "Rotation" << std::endl;
  } else {
    std::cout << "Not Rotation" << std::endl;
  }
}

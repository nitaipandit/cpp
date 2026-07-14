#include <iostream>
int main() {
  std::string s1;
  std::cout << "enter the strinng:";
  std::cin >> s1;
  int n = s1.length();
  char s2;
  std::cout << "enter the charecter:";
  std::cin >> s2;
  int x = 0;
  for (int i = 0; i < n; i++) {
    if (s1[i] != s2) {
      std::cout << s1[i];
    }
  }
  std::cout << std::endl;
}

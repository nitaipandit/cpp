// 15. Count Occurrence of a Character
// Input:
// sprintftring: banana
// Char: a
// Output: 3
#include <iostream>
int main() {
  int i, n, count = 0;
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  n = str.length();
  char c;
  std::cout << "enter the Character:";
  std::cin >> c;
  for (i = 0; i < n; i++) {
    if (str[i] == c) {
      count++;
    }
  }
  std::cout << "Output = " << count << std::endl;
}

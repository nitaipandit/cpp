// 17. Replace Character
// Input:
// String: apple
// Replace p with b
// Output: abble
#include <iostream>
int main() {
  int i, n;
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  n = str.length();
  char c, r;
  std::cout << "Enter the charecter:";
  std::cin >> c;
  std::cout << "enter the Replace charecter:";
  std::cin >> r;
  for (i = 0; i < n; i++) {
    if (str[i] == c) {
      str[i] = r;
    }
  }
  for (i = 0; i < n; i++) {
    std::cout << str[i];
  }
  std::cout << std::endl;
}

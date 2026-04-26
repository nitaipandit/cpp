// Remove Duplicate Characters
// Input: programming
// Output: progamin

#include <iostream>
int main() {
  int i, n, j;
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  n = str.length();
  int visit[256] = {0};
  for (i = 0; i < n; i++) {
    if (visit[str[i]] == 0) {
      std::cout << str[i];
      visit[str[i]] = 1;
    }
  }
  std::cout << std::endl;
}

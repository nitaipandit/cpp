#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length of string:";
  std::cin >> n;
  std::string str;
  std::cout << "enter the string:";
  getline(std::cin, str);

  int x, j;
  for (i = n - 1; i > n; i--) {
    if (str[i] == ' ') {
      x = str[i];
    }
    for (j = x + 1; j < n; j++) {
      std::cout << str[j];
    }
  }
}

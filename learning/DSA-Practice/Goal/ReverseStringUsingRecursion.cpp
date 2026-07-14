#include <iostream>
using namespace std;
std::string reverse(std::string str) {
  if (str.length() == 0) {
    return "";
  }
  return reverse(str.substr(1)) + str[0];
}
int main() {
  int i, n;
  std::cout << "enter the length of str:";
  std::cin >> n;
  std::string str[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the string:";
    std::cin >> str[i];
  }
  reverse(str);
}

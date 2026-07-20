#include <cctype>
#include <iostream>

bool isalfanum(char ch) {
  if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
    return true;
  }
  return false;
}
int main() {

  std::string str;
  std::cout << "enter the string:";
  getline(std::cin, str);

  int st = 0, end = str.size() - 1, check = 0;

  while (st < end) {
    if (!isalfanum(str[st])) {
      st++;
      continue;
    }
    if (!isalfanum(str[end])) {
      end--;
      continue;
    }
    if (tolower(str[st]) != tolower(str[end])) {
      check = 1;
    }
    st++;
    end--;
  }
  if (check == 1) {
    std::cout << "Not Palindromic." << std::endl;
  } else {
    std::cout << "Palindromic." << std::endl;
  }
}

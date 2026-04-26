// Find Length of String.
// Input: hello
// Output: 5
#include <iostream>
int main() {
  int i, length, count = 0;
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  length = str.length();
  for (i = 0; i < length; i++) {
    if (str[i] == ' ') {
      count++;
    }
    count++;
  }
  std::cout << "Output:" << count << std::endl;
}

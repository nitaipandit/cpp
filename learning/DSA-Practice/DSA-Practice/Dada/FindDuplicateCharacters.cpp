// Find Duplicate Characters
// Input: programming
// Output: r g m
#include <iostream>
int main() {
  std::string s1;
  std::cout << "enter the string :";
  std::cin >> s1;
  int n = s1.length();
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (s1[i] == s1[j]) {
        std::cout << s1[i];
      }
    }
  }
  std::cout << std::endl;
}

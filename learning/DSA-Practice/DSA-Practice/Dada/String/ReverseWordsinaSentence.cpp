// 1. Reverse Words in a Sentence
// Input: I love coding
// Output: coding love I
// 2. Check Anagram
// Input:
// s1 = listen
// s2 = silent
#include <iostream>
int main() {
  int i, n, j;
  std::string str;
  std::cout << "enter the string :";
  getline(std::cin, str);
  n = str.length();
  for (i = n - 1; i >= 0; i--) {
    if (str[i] == ' ') {
      for (int j = i; j < n; j++) {
        std::cout << str[j];
      }
      std::cout << " ";
      n = i;
    }
  }
  for (i = 0; i < n; i++) {
    std::cout << str[i];
  }
  std::cout << std::endl;
}

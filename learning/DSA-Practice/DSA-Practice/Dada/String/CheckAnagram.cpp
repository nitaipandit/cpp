// 2. Check Anagram
// Input:
// s1 = listen
// s2 = silent

#include <iostream>
int main() {
  int i, n, m, count = 0;
  std::string str1, str2;
  std::cout << "enter the string 1:";
  std::cin >> str1;
  std::cout << "enter the string 2:";
  std::cin >> str2;
  n = str1.length();
  m = str2.length();
  if (n == m) {
    for (i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (str1[i] == str2[j]) {
          count++;
        }
      }
    }
    if (count == n) {
      std::cout << "Anagram." << std::endl;
    } else {
      std::cout << "Not Anagaram." << std::endl;
    }
  } else {
    std::cout << "length is not same. Not Anagram.";
  }
}

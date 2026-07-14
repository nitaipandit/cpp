// Count Frequency of Characters
// Input: aabbbcc
// Output:

// a → 2
// b → 3
// c → 2
#include <iostream>
int main() {
  int i, n;
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  n = str.length();
  int Frequency[256] = {0};
  for (i = 0; i < n; i++) {
    Frequency[str[i]]++;
  }
  for (i = 0; i < n; i++) {
    if (Frequency[str[i]] != 0) {
      std::cout << str[i] << " -> " << Frequency[str[i]] << std::endl;
      Frequency[str[i]] = 0;
    }
  }
}

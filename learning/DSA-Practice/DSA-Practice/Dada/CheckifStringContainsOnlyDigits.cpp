// Check if String Contains Only Digits
// Input: 12345
// Output: Yes
#include <iostream>
int mian() {
  std::string str;
  std::cout << "enter the string:";
  std::cin >> str;
  int n = str.length();
  int flag = 1;
  for (int i = 0; i < n; i++) {
    if (str[i] >= 0 || str[i] <= 0) {
      flag = 0;
    }
  }
  if (flag == 0) {
    std::cout << "yes." << std::endl;
  } else {
    std::cout << "NO." << std::endl;
  }
  return 0;
}

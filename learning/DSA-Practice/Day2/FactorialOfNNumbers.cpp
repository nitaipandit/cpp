#include <iostream>
int main() {
  int i, n, add = 1;
  std::cout << "enter the n number:";
  std::cin >> n;
  for (i = 1; i <= n; i++) {
    add = add * i;
  }
  std::cout << "OUTPUT:" << add << std::endl;
}

#include <iostream>

int isgcd(int a, int b) {
  if (a == 0) {
    return b;
  }
  if (b == 0) {
    return a;
  }
  return isgcd(b, a % b);
}
int main() {
  int a, b;
  std::cout << "enter the Number A:";
  std::cin >> a;
  std::cout << "enter the Number B:";
  std::cin >> b;
  std::cout << isgcd(a, b) << std::endl;
  return 0;
}

#include <iostream>

int sum(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n + sum(n - 1);
}
int main() {
  int n;
  std::cout << "enter the Number:";
  std::cin >> n;
  std::cout << "Sum=" << sum(n) << std::endl;
}

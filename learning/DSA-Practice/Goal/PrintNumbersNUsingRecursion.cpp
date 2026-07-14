#include <iostream>

void print(int n) {
  if (n == 0) {
    return;
  }
  print(n - 1);
  std::cout << n << " ";
}
int main() {
  int n;
  std::cout << "enter the Number:";
  std::cin >> n;
  print(n);
}

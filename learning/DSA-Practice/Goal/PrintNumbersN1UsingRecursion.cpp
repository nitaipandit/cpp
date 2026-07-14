#include <iostream>
void Count(int n) {
  if (n == 0) {
    return;
  }
  std::cout << n << " ";
  Count(n - 1);
}
int main() {
  int n;
  std::cout << "enter the Number";
  std::cin >> n;
  Count(n);
}

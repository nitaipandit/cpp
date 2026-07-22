#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the Number:";
  std::cin >> n;

  for (i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      std::cout << "Not A Prime Number." << std::endl;
    } else {
      std::cout << "yes " << n << " is a Prime Number " << std::endl;
    }
  }
}

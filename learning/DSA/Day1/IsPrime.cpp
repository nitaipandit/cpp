#include <iostream>
int main() {
  int x;
  std::cout << "enter the number:";
  std::cin >> x;
  bool isprime = true;
  if (x <= 1) {
    isprime = false;
  } else {
    for (int i = 2; i <= x / 2; i++) {
      if (x % i == 0) {
        isprime = false;
        break;
      }
    }
  }
  if (isprime) {
    std::cout << "number is prime." << std::endl;
  } else {
    std::cout << "number is not prime." << std::endl;
    return 0;
  }
}

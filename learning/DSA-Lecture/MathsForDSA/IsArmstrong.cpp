#include <iostream>
bool isarmstrong(int n) {
  int copyN = n;
  int sum = 0;
  while (n != 0) {
    int digit = n % 10;
    sum += (digit * digit * digit);
    n = n / 10;
  }
  if (copyN == sum) {
    return true;
  } else {
    return false;
  }
}
int main() {
  int num;
  std::cout << "enter the Number:";
  std::cin >> num;
  if (isarmstrong(num)) {
    std::cout << "Is A Armstrong." << std::endl;
  } else {
    std::cout << "No Its Not A Armstrong." << std::endl;
  }
}

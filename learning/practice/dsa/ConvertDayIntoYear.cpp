// convert days into year;
#include <iostream>
int main() {
  int days;
  int weeks = 0;
  int month = 0;
  int year = 0;
  std::cout << "enter the days:";
  std::cin >> days;
  int i;
  int a = 0;
  int b = 0;
  int c = 0;
  for (i = 0; i < days; i++) {
    a = a + 1;
    if (a == 7) {
      weeks = weeks + 1;
      a = 0;
      b = b + 1;
      if (b == 30) {
        month = month + 1;
        b = 0;
        c = c + 1;
        if (c == 12) {
          year = year + 1;
          c = 0;
        }
      }
    }
  }
  std::cout << "year=" << year << std::endl;
  std::cout << "month=" << month << std::endl;
  std::cout << "weeks=" << weeks << std::endl;
  std::cout << "days=" << days << std::endl;
}

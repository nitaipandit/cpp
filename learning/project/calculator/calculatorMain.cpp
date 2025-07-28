#include "AdvanceCalculator.h"
#include <iostream>
int main() {
  AdvancedCalculator cal;
  int f;
  char choice;
  int temp = 1;
  std::cout << "Enter first number:";
  std::cin >> f;
  do {
    std::cout << "\n (+),(-),(*),(/),";
    std::cout << "(=) to exit.\n" << std::endl;
    std::cout << "choose opretion:";
    std::cin >> choice;
    switch (choice) {

    case '+': {
      int s = 0;
      int sum;
      std::cout << "enter second number:";
      std::cin >> s;
      if (temp == 0) {
        sum = cal.add(s);
      } else if (temp == 1) {
        sum = cal.add(f, s);
      }
      std::cout << "\nresult=" << sum << std::endl;
      temp = 0;
      break;
    }

    case '-': {
      int s = 0;
      int sub;
      std::cout << "enter second opretion:";
      std::cin >> s;
      if (temp == 0) {
        sub = cal.sub(s);
      } else if (temp == 1) {
        sub = cal.sub(f, s);
        temp = 0;
      }
      std::cout << "\nresult=" << sub << std::endl;
      break;
    }

    case '*': {
      int multi = 0;
      int s;
      std::cout << "enter the second number:";
      std::cin >> s;
      if (temp == 0) {
        multi = cal.mul(s);
      } else if (temp == 1) {
        multi = cal.mul(f, s);
        temp = 0;
      }
      std::cout << "\nresult=" << multi << std::endl;
      break;
    }

    case '/': {
      int divi = 0;
      int s;
      std::cout << "enter the second number:";
      std::cin >> s;
      if (temp == 0) {
        divi = cal.div(s);
      } else if (temp == 1) {
        divi = cal.div(f, s);
        temp = 0;
      }
      std::cout << "\nresult=" << divi << std::endl;
      break;
    }
    case '=': {
      return 0;
    }
    }
  } while (choice != '=');
}

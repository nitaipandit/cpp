#include "calculation.h"
#include <iostream>

int main() {
  calculation calc;
  int a = 0;
  int flag = 1;
  std::cout << "enter number 1st:";
  std::cin >> a;
  while (1) {
    // std::cout << "\n---menu---\n" << std::endl;
    std::cout << "\n(+),(-),(*),(/):" << std::endl;
    // std::cout << "(-).\n" << std::endl;
    // std::cout << "(*).\n" << std::endl;
    // std::cout << "(/).\n" << std::endl;
    std::cout << "(=).Exit.\n" << std::endl;
    char choise;
    std::cout << "enter opretion:";
    std::cin >> choise;
    switch (choise) {
    case '+': {
      int b = 0;
      int sum;
      std::cout << "enter number 2nd:" << std::endl;
      std::cin >> b;
      if (flag == 0) {
        sum = calc.add(b);
      } else if (flag == 1) {
        sum = calc.add(a, b);
        flag = 0;
      }
      std::cout << "resut:" << sum << std::endl;
      break;
    }
    case '-': {
      int b = 0;
      int sum;
      std::cout << "enter number 2nd:" << std::endl;
      std::cin >> b;
      if (flag == 0) {
        sum = calc.sub(b);
      } else if (flag == 1) {
        sum = calc.sub(a, b);
        flag = 0;
      }
      std::cout << "\nresult:" << sum << std::endl;
      break;
    }
    case '*': {
      int b = 0;
      int sum;
      std::cout << "enter number: 2nd" << std::endl;
      std::cin >> b;
      if (flag == 0) {
        sum = calc.multi(b);
      } else if (flag == 1) {
        sum = calc.multi(a, b);
        flag = 0;
      }
      std::cout << "\nresult:" << sum << std::endl;
      break;
    }
    case '/': {
      int b = 0;
      int sum;
      std::cout << "enter number 2nd:";
      std::cin >> b;
      if (flag == 0) {
        sum = calc.div(b);
      } else if (flag == 1) {
        sum = calc.div(a, b);
        flag = 0;
      }
      std::cout << "\nresult:" << sum << std::endl;
      break;
    }
    case '=': {
      a = 0;
      return 0;
      std::cout << "exit.";
      break;
    }
    }
  }
}

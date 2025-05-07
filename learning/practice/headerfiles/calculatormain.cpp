#include "calculator.h"
#include <iostream>
int main() {
  Calculator a, s, m, d;
  int x, y;
  char op;
  char choise;
  int result;
  do {
    std::cout << "enter first number:";
    std::cin >> x;
    std::cout << "+,-,*,/";
    std::cout << "enter opretion:";
    std::cin >> op;
    std::cout << "enter second number:";
    std::cin >> y;
    switch (op) {
    case '+': {
      int result = a.add(x, y);
      std::cout << "result:" << result << std::endl;
      break;
    }
    case '-': {
      result = s.sub(x, y);
      std::cout << "result:" << result << std::endl;
      break;
    }
    case '*': {
      result = m.multi(x, y);
      std::cout << "reslut:" << result << std::endl;
      break;
    }
    case '/': {
      result = d.divide(x, y);
      std::cout << "result:" << result << std::endl;
      break;
    }
    default: {
      std::cout << "invalid opretion:" << std::endl;
      break;
    }
      std::cout << "do u want to more preform opretion: y/n";
      std::cin >> choise;
    }
  } while (choise != 'y' || choise != 'Y');
  return 0;
}

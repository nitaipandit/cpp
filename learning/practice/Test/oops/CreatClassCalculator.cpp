#include <climits>
#include <iostream>
class calculator {
public:
  int add(int a, int b) { return a + b; }
  int sub(int a, int b) { return a - b; }
  int multi(int a, int b) { return a * b; }
  int div(int a, int b) {
    if (b != 0) {
      return a / b;
    }
    return INT_MAX;
  }
};
int main() {
  calculator calc;
  int a, b;
  std::cout << "enter the first number:";
  std::cin >> a;
  std::cout << "enter the second number:";
  std::cin >> b;
  std::cout << "ADD:" << calc.add(a, b) << std::endl;
  std::cout << "sub:" << calc.sub(a, b) << std::endl;
  std::cout << "multi:" << calc.multi(a, b) << std::endl;
  std::cout << "div:" << calc.div(a, b) << std::endl;
}

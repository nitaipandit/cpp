#include "AdvancedCalculator.h"
#include <iostream>

int main()
{
  // Compile time Polymorphism
  AdvancedCalculator calc;
  int sum = calc.add(1,4);
  sum = calc.add(6);
  sum = calc.sub(2);
  sum = calc.sub(2);
  std::cout << "Sum: " << sum << std::endl;

  // Runtime Polymorphism
  CalculatorInterface *calIntr = nullptr;
  int choice;
  std::cout<< "1. AdvancedCalculator\n 2. Calculator\n" << std::endl;
  std::cin >> choice;
  switch(choice){
    case 1:
      calIntr = new AdvancedCalculator();
      break;
    case 2:
    default:
      calIntr = new Calculator();
  };
  sum = 0;
  sum = calIntr->add(1,4);
  sum = calIntr->add(6);
  sum = calIntr->sub(2);
  sum = calIntr->sub(2);
  std::cout << "Sum: " << sum << std::endl;
}

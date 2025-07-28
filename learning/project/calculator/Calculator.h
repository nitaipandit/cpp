#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__
#include "CalculatorInterface.h"
#include <climits>
class Calculator : public CalculatorInterface {
public:
  virtual int add(int a, int b) { return a + b; }
  virtual int sub(int a, int b) { return a - b; }
  virtual int mul(int a, int b) { return a * b; }
  virtual int div(int a, int b) {
    if (b != 0) {
      return a / b;
    }
    return INT_MAX;
  }
};
#endif // !__CALCULATOR_H__

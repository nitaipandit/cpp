#ifndef __CALCULATOR__H__
#define __CALCULATOR__H__
#include "CalculatorInterface.h"
#include <climits>
class calculator : public CalculatorInterface {
public:
  virtual int add(int a, int b) { return a + b; }
  virtual int sub(int a, int b) { return a - b; }
  virtual int multi(int a, int b) { return a * b; }
  virtual int div(int a, int b) {
    if (b != 0) {
      return a / b;
    }
    return INT_MAX;
  }
};
#endif // !DEBUG

#ifndef __CALCULATORINTERFACE_H__
#define __CALCULATORINTERFACE_H__
#include <iostream>
class CalculatorInterface {
public:
  virtual int add(int a, int b) = 0;
  virtual int sub(int a, int b) = 0;
  virtual int mul(int a, int b) = 0;
  virtual int div(int a, int b) = 0;

  virtual int add(int a) { return a; }
  virtual int sub(int a) { return a; }
  virtual int mul(int a) { return a; }
  virtual int div(int a) { return a; }
};
#endif // !CALCULATORINTERFACE_H__

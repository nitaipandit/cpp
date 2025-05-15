#ifndef __ADVANCED_CALCULATOR_H__
#define __ADVANCED_CALCULATOR_H__

#include "Calculator.h"
class AdvancedCalculator : public Calculator {
public:
  AdvancedCalculator() { resetResult(); }
  void resetResult() { m_result = 0; }
  int add(int a) override {
    m_result = m_result + a;
    return m_result;
  }
  int add(int a, int b) override {
    m_result = a + b;
    return m_result;
  }
  int sub(int a) override {
    m_result = m_result - a;
    return m_result;
  }
  int sub(int a, int b) override {
    m_result = a - b;
    return m_result;
  }
  int mul(int a) override {
    m_result = m_result * a;
    return m_result;
  }
  int mul(int a, int b) override {
    m_result = a * b;
    return m_result;
  }
  int div(int a) override {
    m_result = Calculator::div(m_result, a);
    return m_result;
  }
  int div(int a, int b) override {
    m_result = Calculator::div(a, b);
    return m_result;
  }

private:
  int m_result;
};

#endif // __ADVANCED_CALCULATOR_H__

#ifndef __ADVANCECALCULATOR_H__
#define __ADVANCECALCULATOR_H__
#include "Calculator.h"
#include <climits>
#include <system_error>
class AdvancedCalculator : public Calculator {
  int m_result;

public:
  AdvancedCalculator() { resetresult(); }
  void resetresult() { m_result = 0; }

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
    if (m_result != 0) {
      m_result = m_result / a;
      return m_result;
    }
    return INT_MAX;
  }
  int div(int a, int b) override {
    if (b != 0) {
      m_result = a / b;
      return m_result;
    }
    return INT_MAX;
  }
};
#endif // !__ADVANCECALCULATOR_H__

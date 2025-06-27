#ifndef __CALCULATION_H__
#define __CALCULATION_H__
#include "calculator.h"
#include <climits>
#include <filesystem>
#include <iostream>
class calculation : public calculator {

public:
  calculation() { resetresult(); }
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
  int multi(int a) override {
    m_result = m_result * a;
    return m_result;
  }
  int multi(int a, int b) override {
    m_result = a * b;
    return m_result;
  }
  int div(int a) override {
    m_result = m_result / a;
    return m_result;
  }
  int div(int a, int b) override {
    m_result = a / b;
    return m_result;
  }

private:
  int m_result;
};
#endif // !__CALCULATION_H__

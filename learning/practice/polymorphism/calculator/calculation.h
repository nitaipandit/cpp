#ifndef __CALCULATION__H__
#define __CALCULATION__H__
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

private:
  int m_result;
};

#endif // !__CALCULATION__H__

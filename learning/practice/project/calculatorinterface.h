#ifndef __CALCULATORINTERFACE_H__
#define __CALCULATORINTERFACE_H__
#include <climits>
class calculatorInterface {
public:
  virtual int add(int a, int b);
  virtual int sub(int a, int b);
  virtual int multi(int a, int b);
  virtual int div(int a, int b);
};
#endif // !__CALCULATORINTERFACE__H__

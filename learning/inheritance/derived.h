#ifndef __DERIVED__H__
#define __DERIVED__H__

#include "base.h"
class Derived : public Base {
public:
  Derived() { std::cout << "Derived Constructor" << std::endl; }
  void print() { std::cout << "Printing from Derived class" << std::endl; }
};
#endif

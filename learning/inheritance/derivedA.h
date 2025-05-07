#ifndef __DERIVED_A__H__
#define __DERIVED_A__H__
#include "derived.h"
#include <iostream>
class DerivedA : public Derived {
public:
  DerivedA() { std::cout << "DerivedA constructor" << std::endl; }
  void print() { std::cout << "Printing from DerivedA" << std::endl; }
};
#endif

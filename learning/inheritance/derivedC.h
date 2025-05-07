#ifndef __DERIVED_C__
#define __DERIVED_C__
#include "classB.h"
#include "derivedA.h"
class DerivedC : public DerivedA, public ClassB {

public:
  DerivedC() { std::cout << "DerivedC constructor" << std::endl; }
  using ClassB::print;
};
#endif

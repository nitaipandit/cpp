#ifndef __COLOUR__H__
#define __COLOUR__H__
#include "animal.h"
#include <iostream>

class colour : public animal {
public:
  void types() override { std::cout << "red" << std::endl; }
};
#endif

#ifndef __WEIGHT__H_
#define __WEIGHT__H_

#include "animal.h"
#include <iostream>
class waight : public animal {
public:
  void types() override { std::cout << "15" << std::endl; }
};
#endif

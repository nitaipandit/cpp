#ifndef __CIRCLE__H__
#define __CIRCLE__H__

#include "Shape.h"
#include <iostream>
class Circle : public Shape {
public:
  void draw() override { std::cout << "Drawing Cirlcle" << std::endl; }
};

#endif

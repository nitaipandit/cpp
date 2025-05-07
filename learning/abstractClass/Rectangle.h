#ifndef __RECTANGLE__H__
#define __RECTANGLE__H__

#include "Shape.h"
#include <iostream>
class Rectangle : public Shape {
public:
  void draw() override { std::cout << "Drawing Rectangle" << std::endl; }
  void drawInkColor() override { std::cout << "Drawing in blue color: "; }
};

#endif

#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Shape.h"
#include <iostream>
class Rectangle : public Shape {
public:
  void draw() { std::cout << "Drawing Rectangle" << std::endl; }
};
#endif // __RECTANGLE_H__

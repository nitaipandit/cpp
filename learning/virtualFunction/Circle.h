#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "Shape.h"
#include <iostream>
class Circle : public Shape {
public:
  void draw() { std::cout << "Drawing Circle" << std::endl; }
};
#endif // __CIRCLE_H__

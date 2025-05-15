#ifndef __SHAPE_H__
#define __SHAPE_H__
#include <iostream>
class Shape {
public:
  virtual void draw() {
    std::cout << "Drawing method call on Shape class" << std::endl;
  }
  virtual ~Shape() {}
};
#endif // __SHAPE_H__

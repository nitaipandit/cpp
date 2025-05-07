#ifndef __SHAPE__H__
#define __SHAPE__H__

#include <iostream>
class Shape {
public:
  virtual void draw() = 0; // Pure virtual, Abstract class
  virtual ~Shape() {}
  virtual void drawInkColor() { std::cout << "Drawing in red color: "; }
};
#endif

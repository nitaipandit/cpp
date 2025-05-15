#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"

int main() {
#if 1
  std::cout << "Sizeof Shape:" << sizeof(Shape) << std::endl;
  Shape *shapePtr = nullptr;

  shapePtr = new Circle();
  std::cout << (void *)shapePtr << std::endl;
  std::cout << (void *)(shapePtr + 1) << std::endl;
  shapePtr->draw();
  Circle *circlePtr = (Circle *)shapePtr;
  std::cout << (void *)circlePtr << std::endl;
  std::cout << (void *)(circlePtr + 1) << std::endl;
  circlePtr->draw();
  delete shapePtr;

  shapePtr = new Rectangle();
  shapePtr->draw();
  delete shapePtr;
#endif
}

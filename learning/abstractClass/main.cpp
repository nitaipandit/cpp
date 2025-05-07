#include "Circle.h"
#include "Rectangle.h"
#include <vector>

int main() {
  std::vector<Shape *> shapes;
  shapes.push_back(new Circle());
  shapes.push_back(new Circle());
  shapes.push_back(new Circle());
  shapes.push_back(new Rectangle());
  shapes.push_back(new Rectangle());

  int i = 0;
  for (i = 0; i < shapes.size(); i++) {
    shapes[i]->drawInkColor();
    shapes[i]->draw();
  }

  for (i = 0; i < shapes.size(); i++) {
    delete shapes[i];
  }
}

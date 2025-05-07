#ifndef __BASE__H__
#define __BASE__H__
#include <iostream>
class Base {
public:
  Base() { std::cout << "Base class constructor" << std::endl; }
  void print() { std::cout << "Printing from Base class" << std::endl; }
};
#endif

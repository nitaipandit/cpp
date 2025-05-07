#ifndef __CLASS_B__H__
#define __CLASS_B__H__
#include <iostream>
class ClassB {
public:
  ClassB() { std::cout << "ClassB constructor" << std::endl; }
  void display() {
    std::cout << "display msg: Printing from ClassB" << std::endl;
  }
  void print() { std::cout << "printing from classB" << std::endl; }
};
#endif

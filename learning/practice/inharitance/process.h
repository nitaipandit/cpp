#ifndef __PROCESS__H__
#define __PROCESS__H__
#include <iostream>
class process {
public:
  process() { std::cout << "process cunstructor" << std::endl; }
  void print() { std::cout << "number from process class." << std::endl; }
};
#endif

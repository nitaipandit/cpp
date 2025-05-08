#ifndef __WRITE__H__
#define __WRITE__H__
#include "read.h"
class write : public read {
public:
  write() { std::cout << "write constructor." << std::endl; }
  void print() { std::cout << "print from write class." << std::endl; }
};
#endif

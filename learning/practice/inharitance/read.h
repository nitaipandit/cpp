#ifndef __READ__H__
#define __READ__H__
#include "process.h"
class read : public process {
public:
  read() { std::cout << "read constructor." << std::endl; }
  void print() { std::cout << "print from read class:" << std::endl; }
};
#endif

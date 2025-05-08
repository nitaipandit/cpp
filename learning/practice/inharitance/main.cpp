#include "process.h"
#include "read.h"
#include "write.h"
int main() {
  process processobj;
  read readobj;
  write writeobj;
  processobj.print();

  readobj.print();
  writeobj.print();
}

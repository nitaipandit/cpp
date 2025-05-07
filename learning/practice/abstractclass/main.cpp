#include "animal.h"
#include "colour.h"
#include "waight.h"
#include <vector>
int main() {
  std::vector<animal *> type;
  type.push_back(new colour());
  type.push_back(new waight());
  int i;
  for (i = 0; i < type.size(); i++) {
    type[i]->types();
  }
  for (i = 0; i < type.size(); i++) {
    delete type[i];
  }
}

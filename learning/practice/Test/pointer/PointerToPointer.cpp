#include <iostream>
int main() {
  int x = 20;
  int *ptr = &x;
  int **ptr2 = &ptr;
  std::cout << **ptr2 << std::endl;
}

#include <iostream>
int main() {
  int a = 10;
  int *ptr = &a;
  int **ptr2 = &ptr;
  std::cout << **ptr2 << std::endl;
}

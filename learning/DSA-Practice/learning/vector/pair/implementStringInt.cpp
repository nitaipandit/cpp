#include <iostream>
int main() {
  std::pair<std::string, int> p = {"suman", 3};
  std::cout << p.first;
  std::cout << " " << p.second << std::endl;
}

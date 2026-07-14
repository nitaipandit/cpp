#include <iostream>
#include <map>
int main() {
  std::map<std::string, int> m;
  m["tv"] = 100;
  m["laptop"] = 200;
  m["mobile"] = 150;
  m["earphone"] = 20;
  m["tv"] = 100;
  for (auto p : m) {
    std::cout << p.first << " " << p.second << std::endl;
  }
  std::cout << std::endl;
}

#include <iostream>
#include <map>
int main() {
  std::map<std::string, int> m;
  m.insert({"laptop", 500});
  m.emplace("mobile", 300);
  for (auto p : m) {
    std::cout << p.first << " " << p.second << std::endl;
  }
}

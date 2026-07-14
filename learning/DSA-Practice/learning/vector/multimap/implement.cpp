#include <iostream>
#include <map>
int main() {

  std::multimap<std::string, int> m;
  m.insert({"mobile", 500});
  m.insert({"mobile", 500});
  m.insert({"mobile", 500});
  m.insert({"mobile", 500});
  m.insert({"mobile", 500});

  for (auto p : m) {
    std::cout << p.first << " " << p.second << std::endl;
  }
}

#include <algorithm>
#include <iostream>
#include <vector>

bool comp(std::pair<int, int> p1, std::pair<int, int> p2) {
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return false;
  return -1;
}
int main() {
  std::vector<std::pair<int, int>> vec = {{1, 5}, {5, 2}, {4, 3}, {7, 6}};
  std::sort(vec.begin(), vec.end(), comp);

  for (auto p : vec) {
    std::cout << p.first << " " << p.second << std::endl;
  }
  std::cout << std::endl;
}

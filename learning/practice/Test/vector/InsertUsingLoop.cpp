#include <iostream>
#include <vector>
int main() {
  std::vector<int> element;
  int n, i, t;
  std::cout << "enter length of vector:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> t;
    element.push_back(t);
  }
  for (i = 0; i < element.size(); i++) {
    std::cout << element[i];
  }
}

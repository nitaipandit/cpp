#include <iostream>
#include <vector>
int main() {
  std::vector<int> element;
  std::vector<int> element2;
  std::vector<int> element3;
  int i, n, m, j, temp;
  std::cout << "enter the length of element:";
  std::cin >> n;

  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> temp;
    element.push_back(temp);
  }
  temp = 0;
  std::cout << "enter the length of element2:";
  std::cin >> m;
  for (i = 0; i < m; i++) {
    std::cout << "enter the element:";
    std::cin >> temp;
    element2.push_back(temp);
  }
#if 0
  element3.resize(m + n);
  for (i = 0; i < element.size(); i++) {
    element3[i] = element[i];
  }
  for (i = 0; i < element2.size(); i++) {
    element3[element.size() + i] = element2[i];
  }
#else
  for (i = 0; i < element.size(); i++) {
    element3.push_back(element[i]);
  }
  for (i = 0; i < element2.size(); i++) {
    element3.push_back(element2[i]);
  }

#endif
  for (i = 0; i < element3.size(); i++) {
    // std::cout << element3[i];
    std::cout << element3.at(i);
  }
}

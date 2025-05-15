#include <iostream>
#include <vector>
int main() {
  std::vector<int> element;
  int i, n, temp;
  std::cout << "enter the length of vector:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> temp;
    element.push_back(temp);
  }
  int sum = 0;
  for (i = 0; i < element.size(); i++) {
    sum = sum + element[i];
  }
  std::cout << "total sum:" << sum << std::endl;
}

#include <iostream>
#include <vector>
int main() {
  std::vector<int> element;
  int i, n, j, temp;
  std::cout << "enter the length of vector:";
  std::cin >> for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> temp;
    element.push_back(temp);
  }
  int max = 0;
  for (i = 0; i < element.size; i++) {
    if (element[i] > max) {
      max = element[i];
    }
  }
  std::cout << max << std::endl;
}

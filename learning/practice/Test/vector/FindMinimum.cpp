#include <iostream>
#include <vector>
int main() {
  std::vector<int> element;
  int n, temp, i;
  std::cout << "enter the lenght of vector:" << std::endl;
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element::";
    std::cin >> temp;
    element.push_back(temp);
  }
  int max = 0, min = 0;
  for (i = 0; i < element.size(); i++) {
    if (element[i] > max) {
      max = element[i];
    }
  }
  for (i = 0; i < element.size(); i++) {
    if (max > element[i]) {
      max = element[i];
    }
  }
  std::cout << "Min::" << max << std::endl;
}

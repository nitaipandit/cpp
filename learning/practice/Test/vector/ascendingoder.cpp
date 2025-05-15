#include <iostream>
#include <vector>
int main() {
  std::vector<int> element;
  int i, n, temp, j, temp2;
  std::cout << "enter the length of vector:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> temp;
    element.push_back(temp);
  }
  for (i = 0; i < element.size(); i++) {
    for (j = 0; j < element.size(); j++) {
      if (element[i] < element[j]) {
        temp2 = element[i];
        element[i] = element[j];
        element[j] = temp2;
      }
    }
  }
  for (i = 0; i < element.size(); i++) {
    std::cout << element[i];
  }
}

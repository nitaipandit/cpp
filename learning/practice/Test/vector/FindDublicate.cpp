#include <iostream>
#include <vector>
int main() {
  std::vector<int> element;
  int i, j, n, temp, a = 1, temp2[a];
  std::cout << "enter the length of vector:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> temp;
    element.push_back(temp);
  }
  for (i = 0; i < element.size(); i++) {
    for (j = i; j < element.size(); i++) {
      if (element[i] == element[j]) {
        temp2[a] = element[j];
        element[j] = element[j + 1];
        element[j + 1] = temp2[a];
      }
    }
  }
  for (i = 0; i < element.size(); i++) {
    std::cout << element[i] << std::endl;
  }
}

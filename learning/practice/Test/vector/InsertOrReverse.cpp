// insert form user and print them in reverse;
#include <iostream>
#include <vector>
int main() {
  std::vector<int> element;
  int i, n, temp, temp2 = 0;
  std::cout << "enter the length of vector:";
  std::cin >> n;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> temp;
    element.push_back(temp);
  }
  for (i = 0; i < element.size() / 2; i++) {

    temp2 = element[i];
    element[i] = element[element.size() - i - 1];
    element[element.size() - i - 1] = temp2;
  }
  for (i = 0; i < element.size(); i++) {
    std::cout << element[i];
  }
}

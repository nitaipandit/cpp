#include <iostream>
int main() {
  int i, n, maxelement = 0;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element at index " << i << " :";
    std::cin >> arr[i];
    if (arr[i] > maxelement) {
      maxelement = arr[i];
    }
  }
  std::cout << "Maxelement:" << maxelement << std::endl;
}

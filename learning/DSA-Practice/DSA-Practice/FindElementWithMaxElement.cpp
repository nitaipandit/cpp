#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the langth of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element :";
    std::cin >> arr[i];
  }
  int maxcount = 0;
  int maxelement = arr[0], x = 0;
  for (i = 0; i < n; i++) {
    x = 0;
    for (int j = 0; j < n; j++) {
      if (arr[i] == arr[j]) {
        x++;
      }
    }
    if (x > maxcount) {
      maxcount = x;
      maxelement = arr[i];
    }
  }
  std::cout << "maxelement " << maxelement << " = " << maxcount << std::endl;
}

#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  int flag = 0;
  for (i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        flag++;
      }
    }
  }
  if (flag == 0) {
    std::cout << "No Duplicate." << std::endl;
  } else {
    std::cout << "Yes Duplicate." << std::endl;
  }
}

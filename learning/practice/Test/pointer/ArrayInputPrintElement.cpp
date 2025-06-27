#include <iostream>
int main() {
  int a;
  std::cout << "enter the length :" << std::endl;
  std::cin >> a;
  int arr[a];
  for (int i = 0; i < a; i++) {
    std::cin >> arr[i];
  }
  int *ptr = arr;
  for (int i = 0; i < a; i++) {
    std::cout << *(ptr + i) << std::endl;
  }
}

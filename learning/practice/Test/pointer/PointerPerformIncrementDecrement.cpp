#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length:" << std::endl;
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter th element:" << std::endl;
    std::cin >> arr[i];
  }
  int *ptr = arr;
  ptr++;
  std::cout << "increment:" << *ptr << std::endl;
  ptr--;
  std::cout << "decrement:" << *ptr << std::endl;
}

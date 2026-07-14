// print all element in array.
#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the lenght of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element at index " << i << ":";
    std::cin >> arr[i];
  }
  std::cout << "All Element:";
  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

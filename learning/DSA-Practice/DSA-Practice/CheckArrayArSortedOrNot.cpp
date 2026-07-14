#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n], check = 0, x = 0;
  for (i = 0; i < n; i++) {
    std::cout << "enter the element at index " << i << " :";
    std::cin >> arr[i];
    if (arr[i] >= check) {
      check = arr[i];
      x++;
    } else {
      check = 0;
    }
  }
  if (x == n) {
    std::cout << "Array Are Sorted." << std::endl;
  } else {
    std::cout << "Array are Not Sorted." << std::endl;
  }
}

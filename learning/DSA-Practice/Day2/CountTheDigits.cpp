#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the length :";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value:";
    std::cin >> arr[i];
  }
  int count = 0;
  for (i = 0; i < n; i++) {
    if (i != n) {
      count++;
    }
  }
  std::cout << "OUTPUT:" << count << std::endl;
}

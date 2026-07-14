#include <iostream>
int main() {
  int st, end, len;
  std::cout << "enter the length of array:";
  std::cin >> len;
  int arr[len];
  for (st = 0; st < len; st++) {
    std::cout << "enter the element:";
    std::cin >> arr[st];
  }
  for (st = 0; st < len; st++) {
    for (end = st; end < len; end++) {
      for (int i = st; i <= end; i++) {
        std::cout << arr[i];
      }
      std::cout << " ";
    }
    std::cout << std::endl;
  }
}

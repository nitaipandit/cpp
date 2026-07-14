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
  int count = 0, key;
  std::cout << "enter the key:";
  std::cin >> key;
  for (i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i] + arr[j] == key) {
        count++;
        std::cout << arr[i] << " + " << arr[j] << std::endl;
      }
    }
  }
  std::cout << "Yes Total " << count << " Are find." << std::endl;
}

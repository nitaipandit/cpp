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
  int key;
  std::cout << "enter the specefic element:";
  std::cin >> key;
  int a = 0;
  for (i = 0; i < n; i++) {
    if (arr[i] == key) {
      a++;
    }
  }
  std::cout << "key " << key << " found " << a << std::endl;
}

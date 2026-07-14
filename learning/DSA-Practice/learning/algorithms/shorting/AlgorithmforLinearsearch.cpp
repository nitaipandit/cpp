// Algorithm for Linear search
#include <iostream>

int check(int arr[], int n, int ser) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == n) {
      return i;
    }
  }
  return -1;
}
int main() {
  int i, n, ser;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int x = 0;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element of array:";
    std::cin >> arr[i];
  }
  std::cout << "enter the element for search:";
  std::cin >> ser;
  int result = check(arr, n, ser);

  if (result == -1) {
    std::cout << "index not found.";
  } else {
    std::cout << "element found at index = " << result << std::endl;
  }
}

#include <iostream>
int main() {
  int i, n, j, min;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element::";
    std::cin >> arr[i];
  }
  for (i = 0; i < n - 1; i++) {
    min = i;
    for (j = i + 1; j < n; j++) {
      if (arr[min] > arr[j]) {
        min = j;
      }
    }
    std::swap(arr[i], arr[min]);
  }

  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
}

#include <iostream>
void findsecondlargest(int arr[], int n, int max) {
  int i;
  for (i = 0; i < n; i++) {
    if (arr[i] >= max) {
      max = arr[i];
    }
  }
  arr[max - 1] = 0;
  max = 0;
  for (i = 0; i < n; i++) {
    if (arr[i] >= max) {
      max = arr[i];
    }
  }
  std::cout << "second largest=" << max;
}

int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n], max = 0;
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  findsecondlargest(arr, n, max);
}

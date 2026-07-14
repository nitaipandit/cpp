// appears only once
#include <iostream>

int appears(int arr[], int n) {
  int j, a = 0, i, x;
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        a++;
      }
    }
    if (a == 0) {
      x = arr[i];
    }
  }
  return x;
}
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  int find = appears(arr, n);
  std::cout << find << std::endl;
}

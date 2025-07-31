// Find element with maximum frequency
#include <climits>
#include <iostream>
int main() {
  int i, n, j, k, temp = 1, max = 0, x = 0;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  int arr1[x];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        for (k = j; k < n; k++) {
          arr[k] = arr[k + 1];
        }
        n--;
        j--;
        temp++;
      }
    }
    if (max <= temp) {
      max = temp;
      arr1[x] = arr[i];
    }
    temp = 1;
  }
  std::cout << arr1[x] << "->" << max << std::endl;
}

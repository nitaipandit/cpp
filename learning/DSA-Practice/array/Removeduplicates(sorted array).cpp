#include <iostream>
void removeduplicate(int arr[], int n) {
  int j, i, k;
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        for (k = j; k < n; k++) {
          arr[k] = arr[k + 1];
        }
        n--;
        j--;
      }
    }
  }
  for (i = 0; i < n; i++) {
    std::cout << arr[i];
  }
}
int main() {
  int i, n;
  std::cout << "enter the length of element:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  removeduplicate(arr, n);

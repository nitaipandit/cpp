#include <climits>
#include <iostream>

int max(int arr[], int n) {
  int maximum = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > maximum) {
      maximum = arr[i];
    }
  }
  arr[maximum - 1] = 0;
  return maximum;
}
int main() {
  int i, n;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element at index " << i << " :";
    std::cin >> arr[i];
  }
  int firstmax = max(arr, n);
  int secondmax = max(arr, n);
  std::cout << "firstmax = " << firstmax << std::endl;
  std::cout << "secondmax = " << secondmax << std::endl;
}

// Find Majority Element (> n/2 times)
// Input: 2 2 1 1 2 2 2
// Output: 2
#include <iostream>

int Majorityelement(int arr[], int n) {
  int count = 0;                //=3
  int candidate;                //=2
  for (int i = 0; i < n; i++) { // i=6
    if (count == 0) {
      candidate = arr[i]; // candidate =2;
    }
    if (arr[i] == candidate) {
      count++;
    } else {
      count--;
    }
  }
  return candidate;
}
void secondmethod(int arr[], int n) {
  int i, j, count;
  for (i = 0; i < n; i++) {
    count = 0;
    for (j = 0; j < n; j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
    }
    if (count > n / 2) {
      std::cout << "Majorityelement:" << arr[i] << std::endl;
      break;
    }
  }
}
int main() {
  int i, n;
  std::cout << "enter the number of element:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  std::cout << Majorityelement(arr, n) << std::endl;
  secondmethod(arr, n);
}

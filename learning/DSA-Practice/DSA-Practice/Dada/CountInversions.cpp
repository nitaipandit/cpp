// Count Inversions
// Input: 2 4 1 3 5
// Output: 3
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
  int Inversions = 0;
  for (i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        Inversions++;
      }
    }
  }
  std::cout << "Output:" << Inversions << std::endl;
}

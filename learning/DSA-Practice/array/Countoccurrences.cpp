// Count occurrences
#include <iostream>
int countoccurrence(int arr[], int n, int f) {
  int x = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == f) {
      x++;
    }
  }
  return x;
}
int main() {
  int i, n, f;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  std::cout << "enter the count element:";
  std::cin >> f;
  int find = countoccurrence(arr, n, f);
  std::cout << find << std::endl;
}

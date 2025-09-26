// Binary search (key = 6)
#include <iostream>
int binarysearch(int arr[], int n, int t) {
  int i;
  for (i = 0; i < n; i++) {
    if (arr[i] == t) {
      return i;
    }
  }
  return 0;
}
int main() {
  int i, n, t;
  std::cout << "enter the langth of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  std::cout << "enter the search element:";
  std::cin >> t;
  int index = binarysearch(arr, n, t);
  std::cout << "the number of " << t << " in index no. " << index;
}

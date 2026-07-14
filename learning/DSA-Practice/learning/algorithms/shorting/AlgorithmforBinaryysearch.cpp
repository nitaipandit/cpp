// Algorithm for Binary search
#include <iostream>
int check(int arr[], int n, int ndx) {
  int front = 0;
  int end = n - 1;
  while (front <= end) {
    int mid = front + end / 2;
    if (arr[mid] == ndx) {
      return mid;
    } else if (ndx < arr[mid]) {
      end = end - 1;
    } else {
      front = front + 1;
    }
  }
  return -1;
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
  int ind;
  std::cout << "enter the index to search:";
  std::cin >> ind;
  int result = check(arr, n, ind);
  if (result != -1) {
    std::cout << "element found at index " << result << std::endl;
  } else {
    std::cout << "element not found." << std::endl;
  }
}

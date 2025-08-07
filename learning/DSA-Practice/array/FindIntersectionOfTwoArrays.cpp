//	Find intersection of two arrays  	a = {1, 2, 2, 3}, b = {2, 2, 4}
// 2 2
#include <iostream>
int main() {
  int i, n, j, m;
  std::cout << "enter the length of first array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enterr the value of first array:";
    std::cin >> arr[i];
  }
  std::cout << "enter the length of second array:";
  std::cin >> m;
  int arr1[m];
  for (i = 0; i < m; i++) {
    std::cout << "enter the value of second array:";
    std::cin >> arr1[i];
  }

  int x = 0;
  for (i = 0; i < n; i++) {
    for (j = x; j < m; j++) {
      if (arr[i] == arr1[j]) {
        std::cout << arr[i];
        break;
      }
    }
  }
}

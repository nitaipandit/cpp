//	Find union of two arrays   	a = {1, 2, 4}, b = {2, 3, 5}	1 2 3 4
//5

#include <iostream>
int main() {
  int i, n, m, j, x, k;
  std::cout << "enter the length of array1:";
  std::cin >> n;
  int arr1[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array 1:";
    std::cin >> arr1[i];
  }
  std::cout << "enter the length of array2:";
  std::cin >> m;
  int arr2[m];
  for (i = 0; i < m; i++) {
    std::cout << "enter the value of array2:";
    std::cin >> arr2[i];
  }
  x = m + n;
  int arr3[x];
  for (i = 0; i < n; i++) {
    arr3[i] = arr1[i];
  }
  for (i = 0; i < m; i++) {
    arr3[n + i] = arr2[i];
  }
  for (i = 0; i < x; i++) {
    for (j = i + 1; j < x; j++) {
      if (arr3[i] == arr3[j]) {
        for (k = j; k < x; k++) {
          arr3[k] = arr3[k + 1];
        }
        x--;
        j--;
      }
    }
  }

  // find union
  for (i = 0; i < x; i++) {
    std::cout << arr3[i] << std::endl;
  }
}

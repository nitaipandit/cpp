//	Find majority element (> n/2 times)	{2, 2, 1, 1, 2, 2, 2}
//Majority: 2
#include <iostream>
int main() {
  int i, n, j, k, x = 1, a;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  a = n / 2;
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        x++;
        for (k = j; k < n; k++) {
          arr[k] = arr[k + 1];
        }
        n--;
        j--;
      }
    }
    if (x > a) {
      std::cout << arr[i] << std::endl;
      return 0;
    }
  }
}

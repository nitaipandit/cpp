//	Find subarray with given sum (Sliding Window) 	{1, 4, 20, 3, 10, 5},
// sum = 33	Subarray: 20 3 10
#include <iostream>
int main() {
  int i, n, j, c, num;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  std::cout << "enter the number of sum:";
  std::cin >> num;
  for (i = 0; i < n; i++) {
    if (arr[i] == num) {
      std::cout << arr[i] << std::endl;
    }
    for (j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == num) {
        std::cout << arr[i] << " " << arr[j] << std::endl;
      }
      for (c = j + 1; c < n; c++) {
        if (arr[i] + arr[j] + arr[c]) {
          std::cout << arr[i] << " " << arr[j] << " " << arr[c] << std::endl;
        }
      }
    }
  }
}

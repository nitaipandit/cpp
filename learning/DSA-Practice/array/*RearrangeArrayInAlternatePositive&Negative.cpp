//	Rearrange array in alternate positive & negative
#include <iostream>
int main() {
  int i, n, j, temp;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < i + 2; j++) {
      if (arr[i] <= -1 && arr[j] >= 1) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        break;
      }
    }
  }
  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
}

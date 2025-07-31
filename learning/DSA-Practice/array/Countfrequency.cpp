// Count frequency (0 to n-1)	{0, 1, 2, 1, 0, 2, 2}	0->2, 1->2, 2->3
#include <iostream>
int main() {
  int i, j, n, k, temp = 1;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        temp++;
        for (k = j; k < n; k++) {
          arr[k] = arr[k + 1];
        }
        n--;
        j--;
      }
    }
    std::cout << arr[i] << " -> " << temp << std::endl;
    temp = 1;
  }
}

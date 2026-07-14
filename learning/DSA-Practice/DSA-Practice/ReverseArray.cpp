#include <iostream>
int main() {
  int i, n, temp;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element at index " << i << " :";
    std::cin >> arr[i];
  }
  int left = 0, right = n - 1;
  for (i = 0; i < n; i++) {
    if (left < right) {
      temp = arr[left];
      arr[left] = arr[right];
      arr[right] = temp;
    }
    left++;
    right--;
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

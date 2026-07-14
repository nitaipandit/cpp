// Reverse the array
#include <iostream>
void reverse(int arr[], int n) {
  int left = 0, right = n - 1, temp;
  for (int i = 0; i < n; i++) {
    if (left < right) {
      temp = arr[left];
      arr[left] = arr[right];
      arr[right] = temp;
    }
    left++;
    right--;
  }
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
  reverse(arr, n);
  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

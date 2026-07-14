// Find Equilibrium Index
//(Sum left = sum right)
// Input: 1 3 5 2 2
// Output: Index 2
#include <iostream>
int main() {
  int i, n, j;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    int leftsum = 0;
    int rightsum = 0;
    for (j = i + 1; j < n; j++) {
      rightsum = rightsum + arr[j];
    }
    for (j = 0; j < i; j++) {
      leftsum = leftsum + arr[j];
    }
    if (leftsum == rightsum) {
      std::cout << i << std::endl;
    }
  }
}

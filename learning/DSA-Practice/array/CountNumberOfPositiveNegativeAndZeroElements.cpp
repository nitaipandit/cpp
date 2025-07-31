// Count number of positive, negative and zero elements
#include <iostream>
int main() {
  int i, l, n = 0, p = 0, z = 0;
  std::cout << "enter the length of array:";
  std::cin >> l;
  int arr[l];
  for (i = 0; i < l; i++) {
    std::cout << "enteer the value of array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < l; i++) {
    if (arr[i] <= -1) {
      n++;
    } else if (arr[i] >= 1) {
      p++;
    } else {
      z++;
    }
  }
  std::cout << "positive = " << p << std::endl
            << "negative = " << n << std::endl
            << "zero = " << z << std::endl;
}

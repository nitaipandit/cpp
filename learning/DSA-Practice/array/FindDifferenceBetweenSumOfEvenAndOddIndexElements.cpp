//	Find difference between sum of even and odd index elements
#include <iostream>
int main() {
  int i, n, e = 0, o = 0, dif = 0;
  std::cout << "enter the length of array:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the value of array:";
    std::cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      e = e + arr[i];
    } else if (arr[i] % 2 != 0) {
      o = o + arr[i];
    }
  }
  if (e >= o) {
    dif = e - o;
  } else {
    dif = o - e;
  }
  std::cout << "even = " << e << std::endl;
  std::cout << "odd = " << o << std::endl;
  std::cout << "dif = " << dif << std::endl;
}

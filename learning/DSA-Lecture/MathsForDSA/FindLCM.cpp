#include <iostream>
int gcd(int A, int B) {
  while (A > 0 && B > 0) {
    if (A > B) {
      A = A % B;
    } else {
      B = B % A;
    }
  }
  if (A == 0) {
    return B;
  } else {
    return A;
  }
}
int FindLcm(int a, int b) {
  int Gcd = gcd(a, b);
  int lcm = (a * b) / Gcd;
  return lcm;
}
int main() {
  int a, b;
  std::cout << "enter the NUmber A:";
  std::cin >> a;
  std::cout << "enter the Number B:";
  std::cin >> b;
  std::cout << FindLcm(a, b) << std::endl;
  return 0;
}

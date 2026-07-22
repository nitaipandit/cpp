#include <iostream>

int isgcd(int A, int B) {
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
int main() {
  int A, B;
  std::cout << "enter the Number A:";
  std::cin >> A;
  std::cout << "enter the Number B:";
  std::cin >> B;
  std::cout << isgcd(A, B) << std::endl;
  return 0;
}

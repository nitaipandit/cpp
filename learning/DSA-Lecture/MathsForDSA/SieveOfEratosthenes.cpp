#include <iostream>
#include <vector>
void isprime(int n) {
  std::vector<bool> prime(n + 1, true);
  int ans = 0;
  prime[0] = false;
  prime[1] = false;
  for (int i = 2; i * i < n; i++) {
    if (prime[i]) {
      for (int j = i * i; j <= n; j += i) {
        prime[j] = false;
      }
    }
  }
  for (int i = 2; i < n; i++) {
    if (prime[i]) {
      ans++;
    }
  }
  std::cout << ans << std::endl;
}
int main() {
  int i, n, ans = 0;
  std::cout << "enter the Number:";
  std::cin >> n;
  isprime(n);
}

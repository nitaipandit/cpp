#include <iostream>
#include <vector>
int main() {
  int i, n;
  std::vector<int> vec = {1, 2, 2, 1, 1};
  n = vec.size();
  int ans = 0, fre = 0;
  for (i = 0; i < n; i++) {
    if (fre == 0) {
      ans = vec[i];
    }
    if (ans == vec[i]) {
      fre++;
    } else {
      fre--;
    }
  }
  std::cout << ans << std::endl;
}

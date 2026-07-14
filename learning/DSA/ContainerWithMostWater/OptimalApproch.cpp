#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the Number of Container:";
  std::cin >> n;
  int height[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the height:";
    std::cin >> height[i];
  }
  int lp = 0, rp = n - 1;
  int MaxWater = 0;
  int CurrentWatter;
  int w, ht;
  while (lp < rp) {
    w = rp - lp;
    ht = std::min(height[lp], height[rp]);
    CurrentWatter = w * ht;
    MaxWater = std::max(MaxWater, CurrentWatter);
    if (height[lp] < height[rp]) {
      lp++;
    } else {
      rp--;
    }
  }
  std::cout << MaxWater << std::endl;
}

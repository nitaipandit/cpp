#include <iostream>
int main() {

  int i, n;
  std::cout << "enter the Number Of Container:";
  std::cin >> n;
  int height[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the height:";
    std::cin >> height[i];
  }
  int w, ht;
  int area, maxheight = 0;
  for (i = 0; i < n; i++) {
    for (int j = 1; j < n; j++) {
      w = j - i;
      ht = std::min(height[i], height[j]);
      area = w * ht;
      maxheight = std::max(maxheight, area);
    }
  }
  std::cout << maxheight << std::endl;
}

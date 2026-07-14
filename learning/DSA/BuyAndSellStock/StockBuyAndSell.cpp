
#include <iostream>
int main() {
  int i, n;
  std::cout << "enter the Number of stock: ";
  std::cin >> n;
  int price[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the stock Rate: ";
    std::cin >> price[i];
  }
  int mp = 0;
  int bb = price[0];
  for (i = 1; i < n; i++) {
    if (price[i] > bb) {
      mp = std::max(mp, price[i] - bb);
    }
    bb = std::min(bb, price[i]);
  }
  std::cout << mp << std::endl;
}

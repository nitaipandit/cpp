#include <climits>
#include <iostream>
int main() {
  int st, end, len;
  int maxsum = INT_MIN;
  std::cout << "enter the length of array:";
  std::cin >> len;
  int arr[len];
  for (st = 0; st < len; st++) {
    std::cout << "enetre the element:";
    std::cin >> arr[st];
  }
  for (st = 0; st < len; st++) {
    int cursum = 0;
    for (end = st; end < len; end++) {
      cursum += arr[end];
      maxsum = std::max(cursum, maxsum);
    }
  }
  std::cout << maxsum;
}

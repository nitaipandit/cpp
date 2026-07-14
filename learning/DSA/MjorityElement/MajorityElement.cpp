#include <iostream>
#include <vector>

int Majority(std::vector<int> nums) {
  int n = nums.size(), val;
  for (int val : nums) {
    int freq = 0;
    for (int el : nums) {
      if (el == val) {
        freq++;
      }
    }
    if (freq > n / 2) {
      return val;
    }
  }
  return val;
}
int main() {
  std::vector<int> nums = {3, 2, 3};
  int ans = Majority(nums);
  std::cout << ans << std::endl;
}

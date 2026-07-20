#include <iostream>
#include <vector>

std::vector<int> pairsum(std::vector<int> nums, int tar) {
  int i = 0, j = nums.size() - 1, ps;
  std::vector<int> ans;
  while (i < j) {
    ps = nums[i] + nums[j];
    if (ps > tar) {
      j--;
    } else if (ps < tar) {
      i++;
    } else {
      ans.push_back(i);
      ans.push_back(j);
      return ans;
    }
  }
  return ans;
}
int main() {
  std::vector<int> nums{1, 2, 3, 4, 5};
  int tar;
  std::cout << "enter the target element:";
  std::cin >> tar;
  std::vector<int> ans = pairsum(nums, tar);
  std::cout << ans[0] << " " << ans[1];
  std::cout << std::endl;
}

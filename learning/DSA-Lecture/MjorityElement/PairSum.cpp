#include <iostream>
#include <vector>

std::vector<int> pairsum(std::vector<int> nums, int target) {
  std::vector<int> ans;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
      }
    }
  }
  return ans;
}
int main() {
  int i, j, n;
  std::cout << "enter the target element:";
  std::cin >> n;
  std::vector<int> nums = {1, 2, 3, 4, 5};
  std::vector<int> ans = pairsum(nums, n);

  std::cout << ans[0] << " " << ans[1] << std::endl;
}

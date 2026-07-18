#include <iostream>
#include <vector>
int main() {
  std::vector<int> vec = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
  int count0 = 0, count1 = 0, count2 = 0;
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] == 0) {
      count0++;
    } else if (vec[i] == 1) {
      count1++;
    } else {
      count2++;
    }
  }

  int idx = 0;
  for (int i = 0; i < count0; i++) {
    vec[idx++] = 0;
  }
  for (int i = 0; i < count1; i++) {
    vec[idx++] = 1;
  }
  for (int i = 0; i < count2; i++) {
    vec[idx++] = 2;
  }

  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
}

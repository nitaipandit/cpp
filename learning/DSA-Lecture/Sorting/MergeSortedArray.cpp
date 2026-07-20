#include <iostream>
#include <vector>
void merge(std::vector<int> &vec1, std::vector<int> &vec2) {
  int n = vec1.size() - 1;
  int m = vec2.size() - 1;
  int indx = m + n - 1;
  int i = n - 1;
  int j = m - 1;
  while (i >= 0 && j >= 0) {
    if (vec1[i] >= vec2[j]) {
      vec1[indx--] = vec1[i--];
    } else {
      vec1[indx--] = vec2[j--];
    }
  }

  while (j >= 0) {
    vec1[indx--] = vec2[j--];
  }

  for (int x = 0; x < indx; x++) {

    std::cout << vec1[x] << " ";
  }
}
int main() {
  std::vector<int> vec1 = {1, 2, 3};
  std::vector<int> vec2 = {2, 5, 6};
  merge(vec1, vec2);
}

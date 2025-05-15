#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> v;
  int i;
  for (i = 0; i <= 5; i++) {
    v.push_back(i * 2);
  }
  for (i = 1; i < v.size(); i++) {
    cout << v[i];
  }
  return 0;
}

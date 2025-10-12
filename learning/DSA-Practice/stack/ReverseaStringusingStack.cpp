// Reverse a String using Stack
#include <iostream>
#include <stack>
std::string reversed(std::string s) {
  std::stack<char> st;
  for (char c : s) {
    st.push(c);
  }
  std::string rev = "";
  while (!st.empty()) {
    rev += st.top();
    st.pop();
  }
  return rev;
}
int main() {
  std::string str = "suman";
  std::cout << "reversed string= " << reversed(str) << " ";
  std::cout << std::endl;
}

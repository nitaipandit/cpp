#include <iostream>
#include <stack>
bool isbalanced(std::string str) {
  std::stack<char> st;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
      st.push(str[i]);
    } else {
      if (st.size() == 0) {
        return false;
      }

      if (st.top() == '(' && str[i] == ')' ||
          st.top() == '{' && str[i] == '}' ||
          st.top() == '[' && str[i] == ']') {
        st.pop();
      } else {
        return false;
      }
    }
  }
  return st.size() == 0;
}
int main() {
  std::string str;
  std::cout << "enter the parentheses:";
  std::cin >> str;
  if (isbalanced(str)) {
    std::cout << "Balanced." << std::endl;
  } else {
    std::cout << "not balanced";
  }
}

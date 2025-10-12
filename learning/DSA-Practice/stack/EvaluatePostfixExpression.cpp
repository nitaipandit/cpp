#include <cmath>
#include <iostream>
#include <stack>
#include <string>

int postprifix(std::string str) {
  std::stack<int> st;
  for (int i = 0; i < str.length(); i++) {
    char c = str[i];
    if (c >= '0' && c <= '9') {
      st.push(c - '0');
    } else {
      int op1 = st.top();
      st.pop();
      int op2 = st.top();
      st.pop();

      switch (c) {
      case '+':
        st.push(op2 + op1);
        break;
      case '-':
        st.push(op2 - op1);
        break;
      case '*':
        st.push(op2 * op1);
        break;
      case '/':
        st.push(op2 / op1);
        break;
      }
    }
  }
  return st.top();
}
int main() {
  std::string str;
  std::cout << "enter the postprifix element:";
  std::cin >> str;
  std::cout << postprifix(str) << std::endl;
  return 0;
}

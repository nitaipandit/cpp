#include <iostream>
#include <ostream>
class Number {
  int num;

public:
  Number(int a) : num(a) {}
  int getnum() { return num; }
  Number operator+(Number a) {
    int x = num + a.num;
    Number newNum(x);
    return newNum;
  }
  int add(Number a) { return num + a.num; }
  friend std::ostream &operator<<(std::ostream &os, const Number &n) {
    os << "Number:" << n.num << " ";
    return os;
  }
};

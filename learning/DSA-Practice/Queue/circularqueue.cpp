#include <iostream>
class circularqueue {
public:
  int *arr;
  int currntsize, cap;
  int f, r;

  circularqueue(int size) {
    cap = size;
    arr = new int(cap);
    currntsize = 0;
    f = 0;
    r = -1;
  }

  void push(int data) {
    if (currntsize == cap) {
      std::cout << "CQ is full\n" << std::endl;
      return;
    }
    r = (r + 1) % cap;
    arr[r] = data;
    currntsize++;
  }

  void pop() {
    if (empty()) {
      std::cout << "cq is empty";
      return;
    }
    f = (f + 1) % cap;
    currntsize--;
  }

  int front() {
    if (empty()) {
      std::cout << "cq is empty";
      return 0;
    }
    return arr[f];
  }

  bool empty() { return currntsize == 0; }

  void printinfo() {
    for (int i = 0; i < cap; i++) {
      std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
  }
};

int main() {
  circularqueue cq(3);
  cq.push(1);
  cq.push(2);
  cq.push(3);
  cq.pop();
  cq.push(4);
  cq.printinfo();
}

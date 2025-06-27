#include <iostream>

class student {
public:
  student() {}
  student(std::string n, int r) {
    name = n;
    roll_no = r;
  }
  std::string name;
  int roll_no;

  void setdetails() {
    std::cout << "enter the student name:";
    getline(std::cin, name);
    std::cout << "enter the roll number:";
    std::cin >> roll_no;
  }

  void getdetails() {
    std::cout << "Name:" << name << std::endl;
    std::cout << "roll_no:" << roll_no << std::endl;
  }
};
int main() {
  student s1;
  s1.setdetails();
  s1.getdetails();
}

#include <iostream>
class student {
public:
  std::string name;
  double *cgpaptr;
  student() {}
  student(std::string name, double cgpa) {
    this->name = name;
    cgpaptr = new double;
    *cgpaptr = cgpa;
  }
  student(student &obj) {
    this->name = obj.name;
    this->cgpaptr = obj.cgpaptr;
  }
  void getinfo() {
    std::cout << "Name:" << name << std::endl;
    std::cout << "cgpa:" << *cgpaptr << std::endl;
  }
  void setinfo() {
    std::cout << "enter name:";
    getline(std::cin, name);
    std::cout << "enter cgpa:";
    std::cin >> *cgpaptr;
  }
};
int main() {
  student s1;
  s1.setinfo();
  s1.getinfo();
  student s2(s1);
  *(s2.cgpaptr) = 45.60;
  s2.getinfo();
}

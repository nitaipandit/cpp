#include <iostream>
#include <string>
int main() {

  class Student {
  private:
    float marks;

  public:
    Student() {}
    Student(std::string n, std::string d, double id, float m) {
      name = n;
      dept = d;
      st_id = id;
      marks = m;
    }
    std::string name;
    std::string dept;
    double st_id;
    void setinfo() {
      std::cout << "enter the name:";
      getline(std::cin, name);
      std::cout << "enter the department:";
      getline(std::cin, dept);
      std::cout << "enter the student id:";
      std::cin >> st_id;
      std::cout << "enter the marks:";
      std::cin >> marks;
      std::cin.ignore();
    }
    void getinfo() {
      std::cout << "Name:" << name << std::endl;
      std::cout << "Dept:" << dept << std::endl;
      std::cout << "st_id:" << st_id << std::endl;
      std::cout << "marks:" << marks << std::endl;
    }
  };

  Student s1;
  s1.setinfo();
  s1.getinfo();
}

#include <iostream>
#include <string>
int main() {
  class Teacher {
  private:
    double salary;

  public:
    Teacher(std::string n, std::string s, std::string d, double sal) {
      name = n;
      sub = s;
      dept = d;
      salary = sal;
    }
    std::string name;
    std::string sub;
    std::string dept;
    void getinfo() {
      std::cout << "Name:" << name << std::endl;
      std::cout << "Subject:" << sub << std::endl;
      std::cout << "Dept:" << dept << std::endl;
      std::cout << "salary:" << salary << std::endl;
    }
  };

  Teacher t1("suman", "C++", "ComputerScince", 2500);
  t1.getinfo();
}

#include <iostream>
#include <string>
int main() {
  class Teacher {
  private:
    double salary;

  public:
    std::string name;
    std::string dept;
    std::string sub;

    void setdata(double s) { salary = s; }
    double getdata() { return salary; }
  };

  Teacher t1;
  std::cout << "enter the teacher name:";
  std::cin >> t1.name;
  std::cout << "enter the name of dept:";
  std::cin >> t1.dept;
  std::cout << "enter the subject:";
  std::cin >> t1.sub;
  t1.setdata(2500);

  std::cout << "Name:" << t1.name << std::endl;
  std::cout << "Dept:" << t1.dept << std::endl;
  std::cout << "Sub:" << t1.sub << std::endl;
  std::cout << t1.getdata();
}

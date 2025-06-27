#include <iostream>
class person {
public:
  std::string name;
  int age;
  person() { std::cout << "hi i am parent constructor:"; }
};
class student : public person {
public:
  int roll;
  student() { std::cout << "hi i am child constructor:"; }
  // student(&obj) {
  // this->name = obj.name;
  // this->age = obj.age;
  // this->roll = obj.roll;
  //}
  void setdetails() {
    std::cout << "enter the name:";
    getline(std::cin, name);
    std::cout << "enter the age:";
    std::cin >> age;
    std::cout << "enter the roll:";
    std::cin >> roll;
  }
  void getdetails() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Roll: " << roll << std::endl;
  }
};
int main() {
  student s1;
  s1.setdetails();
  s1.getdetails();
}

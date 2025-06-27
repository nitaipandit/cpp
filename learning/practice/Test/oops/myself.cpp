#include <iostream>
#include <string>

class myself {
public:
  myself() {}
  myself(std::string n, std::string f, std::string m, std::string b) {
    name = n;
    father_name = f;
    mother_name = m;
    brother_name = b;
  }
  std::string name;
  std::string father_name;
  std::string mother_name;
  std::string brother_name;

  void setdetails() {
    std::cout << "enter your name:";
    getline(std::cin, name);
    std::cout << "enter your father_name:";
    getline(std::cin, father_name);
    std::cout << "enter your mother_name:";
    getline(std::cin, mother_name);
    std::cout << "enter your brother_name:";
    getline(std::cin, brother_name);
  }

  void getdetails() {
    std::cout << "Name:" << name << std::endl;
    std::cout << "Father name:" << father_name << std::endl;
    std::cout << "Mother name:" << mother_name << std::endl;
    std::cout << "brother name:" << brother_name << std::endl;
  }
};
int main() {
  myself m1;
  m1.setdetails();
  m1.getdetails();
}

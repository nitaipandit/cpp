#include <iostream>
#include <string>
class myself {
private:
public:
  myself() {}
  std::string name;
  std::string f_name;
  std::string m_name;
  std::string b_name;
  myself(std::string n, std::string f, std::string m, std::string b) {
    name = n;
    f_name = f;
    m_name = m;
    b_name = b;
  }
  void setdetails() {
    std::cout << "enter your name:";
    getline(std::cin, name);
    std::cout << "enter your father name:";
    getline(std::cin, f_name);
    std::cout << "enter your mother name:";
    getline(std::cin, m_name);
    std::cout << "enter your brother name:";
    getline(std::cin, b_name);
  }
  void getdetails() {
    std::cout << "Name:" << name << std::endl;
    std::cout << "Father name: " << f_name << std::endl;
    std::cout << "Mother name: " << m_name << std::endl;
    std::cout << "Brother Name:" << b_name << std::endl;
  }
};

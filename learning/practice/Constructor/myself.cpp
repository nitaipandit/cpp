#include <iostream>
class myself {
public:
  std::string name;
  std::string father_name;
  std::string mother_name;
  std::string brother_name;
};

void setdetails() {
  std::cout << "enter your name:";
  getline(std::cin, name);
  std::cout << "enter your father name:";
  getline(std::cin, father_name);
  std::cout << "enter your mother name:";
  getline(std::cin, mother_name);
  std::cout << "enter your brother name:";
  getline(std::cin, brother_name);
}
void getdetails() {
  std::cout << "Name:" << name << endl;
  std::cout << "Father_name:" << fathe_name << endl;
  std::cout << "Mother_name:" << mother_name << endl;
  std::cout << "Brother_name:" << brother_name << endl;
}
int main() {
  myself m1;
  m1.setdetails();
  m1.getdetails();
}

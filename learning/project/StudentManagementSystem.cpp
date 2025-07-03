
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
class student {
  std::string roll;
  std::string name;
  std::string Father_name;
  std::string address;

public:
  void AddStudent();
  void ViewStudent();
  void SearchStudent();
} obj;
int main() {
  int choise;
  std::cout << "1.Add Student." << std::endl;
  std::cout << "2.Search student." << std::endl;
  std::cout << "3.View All Student." << std::endl;
  std::cout << "Exit." << std::endl;
  std::cout << std::endl;
  std::cout << "Enter your choise:";
  std::cin >> choise;

  switch (choise) {
  case 1: {
    obj.AddStudent();
    break;
  }
  case 2: {
    obj.SearchStudent();
    break;
  }
  case 3: {
    obj.ViewStudent();
    break;
  }
  case 4: {
    return 0;
  }
  default: {
    std::cout << "Invalid choise:";
  }
  }
}

void student::AddStudent() {
  std::cin.ignore();
  std::cout << "Enter Student Roll Number:";
  getline(std::cin, roll);
  std::cout << "Enter Student Name:";
  getline(std::cin, name);
  std::cout << "Enter Student Father Name:";
  getline(std::cin, Father_name);
  std::cout << "Enter Student Address:";
  getline(std::cin, address);

  std::ofstream file;
  file.open("studata.txt", std::ios ::out | std::ios ::app);
  file << roll << "\n";
  file << name << "\n";
  file << Father_name << "\n";
  file << address << std::endl;
  file.close();
}

void student::ViewStudent() {
  std::ifstream file;
  file.open("studata.txt", std::ios::in);
  if (!file) {
    std::cout << "File not found" << std::endl;
    return;
  }
  while (std::getline(file, roll)) {
    std::getline(file, name);
    std::getline(file, Father_name);
    std::getline(file, address);

    std::cout << "ROLL:" << roll << std::endl;
    std::cout << "Name:" << name << std::endl;
    std::cout << "Father Name:" << Father_name << std::endl;
    std::cout << "Address:" << address << std::endl;
    std::cout << "--------------------------------------" << std::endl;
  }
  file.close();
}

void student ::SearchStudent() {
  std::string search, roll, name, Father_name, address;
  std::cout << "Enter the student Roll_no for Search:";
  std::cin.ignore();
  std::getline(std::cin, search);

  std::ifstream file("studata.txt");
  if (!file) {
    std::cout << "file not found." << std::endl;
    return;
  }
  // std::getline(file, roll);
  // std::getline(file, name);
  // std::getline(file, Father_name);
  // std::getline(file, address);
  bool found = false;

  while (std::getline(file, roll)) {
    std::getline(file, name);
    std::getline(file, Father_name);
    std::getline(file, address);
    if (roll == search) {
      std::cout << "Roll_no:" << roll << std::endl;
      std::cout << "Name:" << name << std::endl;
      std::cout << "Father_name:" << Father_name << std::endl;
      std::cout << "Address:" << address << std::endl;
      std::cout << "_________________________________" << std::endl;
      found = true;
      break;
    }
  }
  if (!found) {
    std::cout << "student with roll no." << search << "not found" << std::endl;
  }
  file.close();
}

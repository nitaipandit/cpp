#include "loginInterface.h"
#include "studentManagementSystem.h"
#include <fstream>
#include <iostream>
#include <ostream>
int main() {
  Login p;
  int choise;
  do {
    std::cout << "1.Login." << std::endl;
    std::cout << "2.Sing_up." << std::endl;
    std::cout << "3.Forget." << std::endl;
    std::cout << "4.Exit." << std::endl;
    std::cout << "\nEnter your choise:";
    std::cin >> choise;
    switch (choise) {
    case 1: {
      p.login();
      break;
    }
    case 2: {
      p.singup();
      break;
    }
    case 3: {
      p.forget_password();
      break;
    }
    case 4: {
      return 0;
    }
    default: {
      std::cout << "Invalid Choise:";
    }
    }
  } while (choise != 4);
  return 0;
}
void Login::singup() {
  std::cin.ignore();
  std::cout << "Enter Name:";
  std::getline(std::cin, name);
  std::cout << "Enter your Email Address:";
  std::getline(std::cin, email);
  std::cout << "Enter setup Password.";
  std::getline(std::cin, Password);

  std::ofstream file;
  file.open("logindata.txt", std::ios ::out | std::ios::app);
  file << name << "\n";
  file << email << "\n";
  file << Password << "\n";
  std::cout << "\nAccount created Successfully." << std::endl;
  std::cout << "________________________________________" << std::endl;
  file.close();
}

void Login::login() {
  std::cin.ignore();
  std::cout << "Enter the User Name:";
  std::getline(std::cin, search_name);
  std::cout << "Enter the Password:";
  std::getline(std::cin, search_paw);
  std::ifstream file;
  file.open("logindata.txt", std::ios::in);
  std::getline(file, name, '\n');
  std::getline(file, email, '\n');
  std::getline(file, Password, '\n');
  while (std::getline(file, name) && std::getline(file, email) &&
         std::getline(file, Password)) {
    if (name == search_name && Password == search_paw) {
      std::cout << "\nAccount Login Successfully." << std::endl;
      std::cout << "___________________________________________________"
                << std::endl;
      int choise;
      student obj;
      do {
        std::cout << "1.Add Student." << std::endl;
        std::cout << "2.Search student." << std::endl;
        std::cout << "3.View All Student." << std::endl;
        std::cout << "4.Exit." << std::endl;
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
          // return 0;
          break;
        }
        default: {
          std::cout << "Invalid choise:";
        }
        }
      } while (choise != 4);
    }
  }
  std::cout << "username or password incorrect." << std::endl;
  file.close();
}

void Login::forget_password() {
  std::cout << "Forget Password" << std::endl;
  std::getline(std::cin, search_email);
  std::ifstream file;
  file.open("logindata.txt", std::ios::in);
  std::getline(file, email, '\n');
  std::getline(file, Password, '\n');
  while (!file.eof()) {
    if (email == search_email) {
      std::cout << "\nAccount Found." << std::endl;
      std::cout << "Your Password Is:" << Password << std::endl;
    } else {
      std::cout << "Not found:" << std::endl;
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
    std::cout << std::endl;
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

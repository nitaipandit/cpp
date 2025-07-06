// #ifndef __LOGINPROGRAM_H__
// #define __LOGINPROGRAM_H__

#include "loginInterface.h"
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
  while (!file.eof()) {
    if (name == search_name) {
      if (Password == search_paw) {
        std::cout << "\nAccou:nt Login Successfully.";
      }
    } else {
      std::cout << "Error" << std::endl;
    }
    std::getline(file, name, '\n');
    std::getline(file, email, '\n');
    std::getline(file, Password, '\n');
  }
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
// #endif // !__LOGINPROGRAM_H__

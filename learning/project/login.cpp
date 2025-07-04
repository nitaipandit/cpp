#include <fstream>
#include <iostream>
#include <ostream>
class Login {
  std::string name;
  std::string email;
  std::string Password;
  std::string search_name, search_paw, search_email;

public:
  void login();
  void sing_up();
  void Forget();
};
int main() {
  Login p;
  int choise;
  do {
    std::cout << "1.Login." << std::endl;
    std::cout << "2.sing_up." << std::endl;
    std::cout << "3.Forget Password." << std::endl;
    std::cout << "4.exit." << std::endl;
    std::cout << "\nEnter your choise:" << std::endl;
    std::cin >> choise;
    switch (choise) {
    case 1: {
      p.login();
      break;
    }
    case 2: {
      p.sing_up();
      break;
    }
    case 3: {
      p.Forget();
      break;
    }
    case 4: {
      return 0;
    }
    default: {
      std::cout << "invalid choise pls try again:" << std::endl;
      break;
    }
    }
  } while (choise != 4);
}

void Login::sing_up() {
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
        std::cout << "\nAccount Login Successfully.";
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

void Login::Forget() {
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

#include <iostream>
#include <string>
class Bank {
public:
  std::string name;
  int accountnoumber;
  double balance;
  Bank(std::string name, int accountnoumber, double balance) {
    this->name = name;
    this->accountnoumber = accountnoumber;
    this->balance = balance;
  }
  void checkbalance() { std::cout << "Balance:" << balance << std::endl; }
  void dispalybanking() {
    std::cout << "Name:" << name << std::endl;
    std::cout << "Account Number:" << accountnoumber << std::endl;
    std::cout << "Balance:" << balance << std::endl;
  }
  void deposite(int amount) {
    balance = balance + amount;
    std::cout << "Balance:" << balance << std::endl;
    std::cout << "deposite succesfull." << std::endl;
  }
  void withdraw(int amount) {
    if (balance == 0) {
      std::cout << "insuffcint Balance" << std::endl;
    } else {
      balance = balance - amount;
      std::cout << "withdraw succesfull" << std::endl;
    }
  }
};

int main() {
  std::string name;
  int acc_no;
  double CurrentBalance;
  std::cout << "enter your name:";
  getline(std::cin, name);
  std::cout << "enter your accountnoumber:";
  std::cin >> acc_no;
  std::cout << "enter balance:";
  std::cin >> CurrentBalance;

  Bank user(name, acc_no, CurrentBalance);

  int choise;
  double amount;

  do {
    std::cout << "\n---main_menu--\n" << std::endl;
    std::cout << "1.Cheak Balance." << std::endl;
    std::cout << "2.Display Banking." << std::endl;
    std::cout << "3.Withdraw." << std::endl;
    std::cout << "4.Depoisite." << std::endl;
    std::cout << "5.exit." << std::endl;

    std::cout << "enter your choise:";
    std::cin >> choise;

    switch (choise) {
    case 1: {
      user.checkbalance();
      break;
    }
    case 2: {
      user.dispalybanking();
      break;
    }
    case 3: {
      std::cout << "enter the amount to withdraw:" << std::endl;
      std::cin >> amount;
      user.withdraw(amount);
      break;
    }
    case 4: {
      std::cout << "enter the amount to deposite:" << std::endl;
      std::cin >> amount;
      user.deposite(amount);
      break;
    }
    case 5: {
      std::cout << "Thankyou forr banking." << std::endl;
    }
    default: {
      std::cout << "invalid choise." << std::endl;
    }
    }

  } while (choise != 5);
  return 0;
}

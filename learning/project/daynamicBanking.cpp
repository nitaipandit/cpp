#include <iostream>
#include <string>
#include <vector>
class BankAccount {
private:
  std::string name;
  int accountNumber;
  double balance;

public:
  BankAccount(std::string n, int accNo, double bal) {
    name = n;
    accountNumber = accNo;
    balance = bal;
  }

  int getAccountNumber() { return accountNumber; }
  void displayAccount() {
    std::cout << "\n---Account Details---\n" << std::endl;
    std::cout << "Name" << name << std::endl;
    std::cout << "Account Nunber" << accountNumber << std::endl;
    std::cout << "Balance" << balance << std::endl;
  }

  void deposit(double amount) {
    balance += amount;
    std::cout << amount << " " << "Deposit sucessfully" << std::endl;
  }

  void withdraw(double amount) {
    if (amount <= balance) {
      balance -= amount;
      std::cout << amount << " " << "withdraw sucessfull." << std::endl;
    } else {
      std::cout << "insuffcient Balance" << std::endl;
    }
  }
};

class Banksystem {
private:
  std::vector<BankAccount *> accounts;
  BankAccount *findAccount(int accNo) {
    for (auto acc : accounts) {
      if (acc->getAccountNumber() == accNo) {
        return acc;
      }
    }
    return nullptr;
  }

public:
  ~Banksystem() {
    for (auto acc : accounts) {
      delete acc;
    }
  }
  void CreatAccount() {
    std::string name;
    int accNo;
    double bal;
    std::cout << "enter your name:";
    std::cin.ignore();
    getline(std::cin, name);
    std::cout << "enter account number:";
    std::cin >> accNo;
    std::cout << "enter initial balance:";
    std::cin >> bal;

    BankAccount *newAcc = new BankAccount(name, accNo, bal);
    accounts.push_back(newAcc);
    std::cout << "Account created sucessfully" << std::endl;
  }

  void displayAccount() {
    int accNo;
    std::cout << "enter Account Number:";
    std::cin >> accNo;
    BankAccount *acc = findAccount(accNo);
    if (acc) {
      acc->displayAccount();
    } else {
      std::cout << "Account not found" << std::endl;
    }
  }

  void depositMoney() {
    int accNo;
    double amt;
    std::cout << "enter Accoutn Number:";
    std::cin >> accNo;
    BankAccount *acc = findAccount(accNo);
    if (acc) {
      std::cout << "enter ammount to deposite:";
      std::cin >> amt;
      acc->deposit(amt);
    } else {
      std::cout << "Account Not Found" << std::endl;
    }
  }

  void withdrawMoney() {
    int accNo;
    double amt;
    std::cout << "enter Account Number:";
    std::cin >> accNo;
    BankAccount *acc = findAccount(accNo);
    if (acc) {
      std::cout << "Enter the amount to withdraw:";
      std::cin >> amt;
      acc->withdraw(amt);
    } else {
      std::cout << "Account Not Found." << std::endl;
    }
  }

  void menu() {
    int choise;
    do {
      std::cout << "\n--main menu--\n";
      std::cout << "1.create new Account." << std::endl;
      std::cout << "2.Display Account Information." << std::endl;
      std::cout << "3.Deposite Money." << std::endl;
      std::cout << "4.withdraw Money." << std::endl;
      std::cout << "5.exit" << std::endl;

      std::cout << "enter your choise:";
      std::cin >> choise;

      switch (choise) {
      case 1: {
        CreatAccount();
        break;
      }
      case 2: {
        displayAccount();
        break;
      }
      case 3: {
        depositMoney();
        break;
      }
      case 4: {
        withdrawMoney();
        break;
      }
      case 5: {
        std::cout << "thank you for banking." << std::endl;
        break;
      }
      default: {
        std::cout << "invalid choise." << std::endl;
      }
      }
    } while (choise != 5);
  }
};
int main() {
  Banksystem system;
  system.menu();
  return 0;
}

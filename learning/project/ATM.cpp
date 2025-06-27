#include <iostream>
class atm {
public:
  int pin;
  double balance;

  atm(int pin, double balance) {
    this->pin = pin;
    this->balance = balance;
  }

  void balanceenquary(int pin) {
    int code;
    std::cout << "enter pin:";
    std::cin >> code;
    if (pin == code) {
      std::cout << "Balance:" << balance << std::endl;
    }
  }
  void withdraw(int amount, int pin) {
    int code;
    std::cout << "enter pin:";
    std::cin >> code;
    if (pin == code) {
      if (balance >= amount) {
        balance = balance - amount;
        std::cout << "withdraw sussecfull:" << std::endl;
      } else {
        std::cout << "insafiant fund:" << std::endl;
      }
    }
  }

  void deposite(int amount, int pin) {
    int code;
    std::cout << "enter pin:";
    std::cin >> code;
    if (pin == code) {
      balance = +amount;
      std::cout << "deposite sussecfull." << std::endl;
    }
  }
};

int main() {
  int choise;
  int pin;
  double amount;
  std::cout << "enter the pin for transiction:";
  std::cin >> pin;
  atm user(pin, amount);

  do {
    std::cout << "\n---MENU---\n";
    std::cout << "1.Balance Enquary." << std::endl;
    std::cout << "2.Withdraw." << std::endl;
    std::cout << "3.deposite" << std::endl;
    std::cout << "4.exit." << std::endl;

    std::cout << std::endl;
    std::cout << "enter your choise:";
    std::cin >> choise;
    switch (choise) {
    case 1: {
      user.balanceenquary(pin);
      break;
    }
    case 2: {
      std::cout << "enter the amount to withdraw:";
      std::cin >> amount;
      user.withdraw(amount, pin);
      break;
    }
    case 3: {
      std::cout << "enter the amountto deposite:";
      std::cin >> amount;
      user.deposite(amount, pin);
      break;
    }
    case 4: {
      std::cout << "THANKYOU" << std::endl;
      break;
    }
    }
  } while (choise != 4);
  return 0;
}

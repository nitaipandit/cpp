#include "GroceryStoreInterface.h"
#include <ctime>
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
int main() {
  GroceryLogin p1;
  int choise;
  do {
    std::cout << "_______________Wellcome_Sir/Maam_______________" << std::endl;
    std::cout << "\t1.First Day Costomer." << std::endl;
    std::cout << "\t2.Regular Costomer." << std::endl;
    std::cout << "\t0.Exit.";
    std::cout << "\n_______________________________________________"
              << std::endl;
    std::cout << "\nEnter Your Choice:";
    std::cin >> choise;

    switch (choise) {

    case 1: {
      p1.login();
      break;
    }
    case 2: {
      p1.signup();
      break;
    }
    case 0: {
      return 0;
    }
    case 9: {
      p1.Addproduct();
      break;
    }
    default: {
      std::cout << "Sorry Sir Pls Chouse Valid Choice:" << std::endl;
    }
    }
  } while (choise != 0);
  return 0;
}

void GroceryLogin::login() {

  time_t now = time(0);
  tm *itm = localtime(&now);
  int hour = itm->tm_hour;
  if (hour >= 5 && hour < 12) {
    std::cout << "\n__________Good Morning Sir/Maam. Wellcome U Are Our First "
                 "Costomer. "
                 "So Pls Make Your Id.__________"
              << std::endl;
  } else if (hour >= 12 && hour < 17) {
    std::cout
        << "\n__________Good Afternoon Sir/Maam. Wellcome U Are Our First "
           "Costomer. So Pls Make Your Id.__________"
        << std::endl;
  } else {
    std::cout << "\n__________GoodGood Evening.Sir/Maam. Wellcome U Are Our "
                 "First Costomer. "
                 "So Pls Make Your Id.__________"
              << std::endl;
  }

  std::cin.ignore();
  std::cout << "\t\t\tPls Enter Your Name:";
  std::getline(std::cin, name);
  std::cout << "\t\t\tpls Enter Your Mobile Number:";
  std::getline(std::cin, mobile_no);
  std::cout << "\t\t\tPls enter your Address:";
  std::getline(std::cin, address);
  std::cout << "\t\t\tSet Pin For Open Your Id:";
  std::getline(std::cin, pin);

  std::ofstream file;
  file.open("groceryLogin.txt", std::ios::out | std::ios::app);
  file << name << "\n";
  file << mobile_no << "\n";
  file << address << "\n";
  file << pin << "\n";

  std::cout << "Your Id Has Been Created Succesfully Sir/Maam" << std::endl;
  file.close();
}
/*
void GroceryLogin::signup() {
  GroceryLogin obj;
  std::cin.ignore();
  std::cout << "Enter Your Pin To Open Your Id:";
  std::getline(std::cin, searchpin);
  file.open("groceryLogin.txt", std::ios::in);
  std::getline(file, name, '\n');
  std::getline(file, mobile_no, '\n');
  std::getline(file, address, '\n');
  std::getline(file, pin, '\n');
  while (std::getline(file, name) && std::getline(file, mobile_no) &&
         std::getline(file, address) && std::getline(file, pin)) {

    if (pin == searchpin) {
      time_t now = time(0);
      tm *itm = localtime(&now);
      int hour = itm->tm_hour;
      if (hour >= 5 && hour < 12) {
        std::cout << "\nGood Morning Sir/Maam. Wellcome Back" << std::endl;
      } else if (hour >= 12 && hour < 17) {
        std::cout << "\nGood Afternoon Sir/Maam. Wellcome Back" << std::endl;
      } else {
        std::cout << "\nGood Evening.Sir/Maam Wellcome Back." << std::endl;
      }
      int temp;
      do {
        std::cout << "-----------GROCERY-STORE----------" << std::endl;
        std::cout << "1.---> Start Shoping." << std::endl;
        std::cout << "0.---> Exit." << std::endl;
        std::cout << "Enter your choise:";
        std::cin >> temp;
        switch (temp) {
        case 1: {
          int a;
          do {
            std::cout << "1.Viewproduct." << std::endl;
            std::cout << "2.Buyproduct." << std::endl;
            std::cout << "0.Exit." << std::endl;
            std::cout << "\nEnter your Choise Sir/Maam.";
            std::cin >> a;
            switch (a) {
            case 1: {
              obj.Viewproduct();
              break;
            }
            case 2: {
              obj.Buyproduct();
              break;
            }
            case 3: {
              system("exit");
            }
            default: {
              std::cout << "Pls enter valid Choice sir." << std::endl;
            }
            }
          } while (a != 3);
          break;
        }
        case 2: {
          system("exit");
        }
        case 0: {
          break;
        }
        default: {
          std::cout << "Pls Enter Valid Choice sir/maam.";
          break;
        }
        }
      } while (temp != 0);
    }
  }
}
*/
void GroceryLogin::signup() {
  std::cin.ignore(); // To clear the newline character from previous input
  std::cout << "_______________Grocery_Store__________________" << std::endl;
  std::cout << "Enter Your Pin To Open Your Id: ";
  std::getline(std::cin, searchpin);

  std::ifstream file;
  file.open("groceryLogin.txt", std::ios::in);

  if (!file.is_open()) {
    std::cout << "\t\t --Error_To_File_Open--" << std::endl;
    return;
  }

  bool found = false;

  // Loop to search matching PIN
  while (std::getline(file, name) && std::getline(file, mobile_no) &&
         std::getline(file, address) && std::getline(file, pin)) {

    if (pin == searchpin) {
      found = true;
      time_t now = time(0);
      tm *itm = localtime(&now);
      int hour = itm->tm_hour;
      std::cout
          << "\n----------------Wellcome To GROCERY STORE-------------------";
      if (hour >= 5 && hour < 12)
        std::cout << "\n\tGood Morning Sir/Maam. Welcome Back\n";
      else if (hour >= 12 && hour < 17)
        std::cout << "\n\tGood Afternoon Sir/Maam. Welcome Back\n";
      else
        std::cout << "\n\tGood Evening Sir/Maam. Welcome Back\n";

      int temp;
      do {
        std::cout << "\t\t1. Start Shopping\n";
        std::cout << "\t\t0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> temp;

        switch (temp) {
        case 1: {
          int a;
          do {
            std::cout << "------------------------Menu-------------------------"
                      << std::endl;
            std::cout << "\t\t1. View Products";
            std::cout << "\n\t\t2. Buy Products";
            std::cout << "\n\t\t0. Exit\n";
            std::cout
                << "------------------------------------------------------"
                << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> a;

            switch (a) {
            case 1:
              Viewproduct();
              break;
            case 2:
              Buyproduct();
              break;
            case 0:
              break;
            default:
              std::cout << "Invalid choice!\n";
            }
          } while (a != 0);
          break;
        }
        case 0:
          break;
        default:
          std::cout << "Invalid choice!\n";
        }
      } while (temp != 0);
      break;
    }
  }

  if (!found) {
    std::cout << "Invalid PIN. Please try again.\n";
  }

  file.close();
}

void GroceryLogin::Addproduct() {
  std::cin.ignore();
  std::cout << "Enter Product Id:";
  std::getline(std::cin, item_id);
  std::cout << "Enter Product Name:";
  std::getline(std::cin, item_name);
  std::cout << "Enter Item Quantity:";
  std::cin >> item_quantity;
  std::cout << "Enter Product Price:";
  std::cin >> item_price;
  std::ofstream file;
  file.open("data.txt", std::ios::out | std::ios::app);

  file << item_id << "\n";
  file << item_name << "\n";
  file << item_quantity << "\n";
  file << item_price << std::endl;
  file.close();
  std::cout << "Items Add Succesfully.\n" << std::endl;
}
/*
void GroceryLogin::Viewproduct() {
  file.open("data.txt", std::ios::in);
  while (!file.eof()) {
    file >> item_id >> item_name >> item_quantity >> item_price;
    std::cout << "-------------------------------------------------------------"
                 "----------------------------------";
    std::cout << "Product Id" << "\t\t" << "Product Name" << "\t\t"
              << "Quantity" << "\t\t" << "Product Price" << std::endl;
    std::cout << item_id << "\t\t\t" << item_name << "\t\t\t" << item_quantity
              << "\t\t\t" << item_price << std::endl;
    std::cout << "-------------------------------------------------------------"
                 "----------------------------------";
  }
  file.close();
}
*/
/*
void GroceryLogin::Viewproduct() {
  file.open("data.txt", std::ios::in);
  if (!file.is_open()) {
    std::cout << "File 'data.txt' could not be opened or does not exist.\n"
              << std::endl;
    return;
  }
  std::cout << "\n---------------------------------------------------------"
            << std::endl;
  std::cout << "Product Id\t\tProduct Name\t\tQuantity\t\tProduct Price"
            << std::endl;
  std::cout << "____________________________________________________________\n"
            << std::endl;
  while (std::getline(file, item_id) && std::getline(file, item_name) &&
         file >> item_quantity && file >> item_price && file.ignore()) {
    std::cout << item_id << "\t\t\t" << item_name << "\t\t\t" << item_quantity
              << "\t\t\t" << item_price << std::endl;
  }
  std::cout << "____________________________________________________________\n";
  file.close();
}
*/
void GroceryLogin::Viewproduct() {
  std::ifstream file;
  file.open("data.txt", std::ios::in);
  if (!file.is_open()) {
    std::cout << "File 'data.txt' could not be opened.\n";
    return;
  }

  std::cout << "\n-------------------- PRODUCT LIST ----------------------\n";
  std::cout << "Product ID\tProduct Name\tQuantity\tPrice\n";
  std::cout << "--------------------------------------------------------\n";

  while (std::getline(file, item_id) && std::getline(file, item_name) &&
         file >> item_quantity && file >> item_price && file.ignore()) {

    std::cout << item_id << "\t\t" << item_name << "\t\t" << item_quantity
              << "\t\t" << item_price << "\n";
  }

  std::cout << "--------------------------------------------------------\n";
  file.close();
}
/*
void GroceryLogin::Buyproduct() {
  _choice = 'Y';
  while (_choice == 'y') {
    file.open("data.txt", std::ios::in);
    file1.open("temp.txt", std::ios::out | std::ios::app);
    file >> item_id >> item_name >> item_quantity >> item_price;
    std::cin.ignore();
    std::cout << "Enter Product Id:";
    std::getline(std::cin, search);

    std::cout << "Enter Quantity:";
    std::cin >> Quantity;

    while (file >> item_id >> item_name >> item_quantity >> item_price) {
      if (item_id == search) {
        item_quantity = item_quantity - Quantity;
        file1 << item_id << "\n";
        file1 << item_name << "\n";
        file1 << item_quantity << "\n";
        file1 << item_price << std::endl;

        item_rate = Quantity * item_price;
        TotalAmount = TotalAmount + item_rate;
        std::cout << "-------------------Payment-Bil.--------------------";
        std::cout << "TotalAmount:" << TotalAmount << std::endl;
        std::cout << "___________________________________________________";
      } else {
        file1 << item_id << "\n";
        file1 << item_name << "\n";
        file1 << item_quantity << "\n";
        file1 << item_price << std::endl;
      }
      file >> item_id >> item_name >> item_quantity >> item_quantity;
    }
    file.close();
    file1.close();
    remove("data.txt");
    rename("temp.txt", "data.txt");

    std::cout << "\nContinue Shoping ?(Y/N)";
    std::cin >> _choice;
  }
}
*/
void GroceryLogin::Buyproduct() {
  _choice = 'Y';
  while (_choice == 'Y' || _choice == 'y') {
    std::ifstream file;
    file.open("data.txt", std::ios::in);
    std::ofstream file1;
    file1.open("temp.txt", std::ios::out | std::ios::app);
    if (!file.is_open()) {
      std::cout << "Error File is not open.";
      return;
    }
    std::cout << "------------------------Purchased_section--------------------"
                 "---------"
              << std::endl;
    std::cin.ignore();
    std::cout << "\tEnter Product Id to Buy:";
    std::getline(std::cin, search);

    std::cout << "\tEnter Quantity To Buy:";
    std::cin >> Quantity;
    std::cout << "_____________________________________________________________"
                 "___________"
              << std::endl;
    bool found = false;
    while (std::getline(file, item_id) && std::getline(file, item_name) &&
           file >> item_quantity && file >> item_price && file.ignore()) {

      if (item_id == search) {
        found = true;
        if (item_quantity >= Quantity) {
          item_quantity -= Quantity;
          item_rate = Quantity * item_price;
          TotalAmount += item_rate;
          std::cout << "--------------------------Beeling_Section--------------"
                       "-------------"
                    << std::endl;
          std::cout << "\tQuantity" << " " << Quantity << std::endl;
          std::cout << "\tCost: " << item_rate << "\n";
          std::cout << "\tTotal Bill : " << TotalAmount << "\n";
          std::cout << "_______________________________________________________"
                       "______________"
                    << std::endl;
        } else {
          std::cout << "Only" << item_quantity << "Are Available" << std::endl;
        }
      }
      file1 << item_id << "\n"
            << item_name << "\n"
            << item_quantity << "\n"
            << item_price << "\n";
    }
    file.close();
    file1.close();
    remove("data.txt");
    rename("temp.txt", "data.txt");

    if (!found) {
      std::cout << "Invalid Product Id." << std::endl;
    }
    std::cout << "Continue Shoping (Y/N):";
    std::cin >> _choice;
  }
  std::cout
      << "----------------------Wellcome sir/Maam-------------------------"
      << std::endl;
  std::cout << "\tTotal Bill:" << TotalAmount << std::endl;
  std::cout
      << "__________________________________________________________________"
      << std::endl;
}

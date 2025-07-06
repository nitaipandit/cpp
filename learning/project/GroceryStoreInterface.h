#ifndef __GROCERYSTOREINTERFACE_H__
#define __GROCERYSTOREINTERFACE_H__

#include <fstream>
#include <iostream>
#include <string>

class GroceryLogin {
private:
  std::string name, mobile_no, address, pin;
  std::string searchpin;
  std::string item_name;
  std::string item_id;
  float item_price = 0.0f;
  int item_quantity = 0;
  int TotalAmount = 0, Quantity = 0, item_rate = 0;
  char _choice = 'Y';
  std::fstream file, file1;
  std::string search;

public:
  void login();
  void signup(); // Corrected spelling here
  void Addproduct();
  void Viewproduct();
  void Buyproduct();
};

#endif

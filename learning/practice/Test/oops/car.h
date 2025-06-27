#ifndef __CAR_H__
#define __CAR_H__
#include <iostream>
class Car {
public:
  std::string name;
  int price;
  float avg;

  // Car() {}
  Car(std::string n, int p, float a) {
    name = n;
    price = p;
    avg = a;
  }
  Car(std::string n, int p) {
    name = n;
    price = p;
  }
  Car(std::string name, int price, float avg) {
    this->name = name;
    this->price = price;
    this->avg = avg;
  }
  void setdetails() {
    std::cout << "enter the car name:";
    std::cin >> name;
    std::cout << "enter the price:";
    std::cin >> price;
    std::cout << "enter the avg:";
    std::cin >> avg;
  }

  void getdetails() {
    std::cout << name << " " << price << " " << avg << std::endl;
  }
};
#endif // !__CAR_H__

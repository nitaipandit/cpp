#include "MITV.h"
#include "Television.h"
#include <iostream>

void print() { std::cout << "Hello"; }
void print2() { std::cout << "Hello2"; }
int main() {
  print();
  print2();
  Television television(1);   // creating instance/object of Television
  Television television2(10); // creating instance/object of Television
  std::cout << "OnOfStatus:" << television.getOnOffStatus() << std::endl;
  std::cout << "CurrentChannel:" << television.getCurrentChannel() << std::endl;

  std::cout << "[TV2] OnOfStatus:" << television2.getOnOffStatus() << std::endl;
  std::cout << "[TV2] CurrentChannel:" << television2.getCurrentChannel()
            << std::endl;
  television.toggleOnOff();
  television.setBrightnessLevel(70);
  std::cout << "OnOfStatus:" << television.getOnOffStatus() << std::endl;
  std::cout << "brightnessLevel:" << television.getBrightnessLevel()
            << std::endl;
  television2.setBrightnessLevel(60);
  std::cout << "[TV2]OnOfStatus:" << television2.getOnOffStatus() << std::endl;
  std::cout << "[TV2]brightnessLevel:" << television2.getBrightnessLevel()
            << std::endl;
  MITV mitv;
  std::cout << "[MITV]OnOfStatus" << mitv.toggleOnOff() << std::endl;
}

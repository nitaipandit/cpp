#ifndef __STUDENTMANAGEMENTSYSTEM_H__
#define __STUDENTMANAGEMENTSYSTEM_H__
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
class student {
  std::string roll;
  std::string name;
  std::string Father_name;
  std::string address;

public:
  void AddStudent();
  void ViewStudent();
  void SearchStudent();
};
#endif // !__STUDENTMANAGEMENTSYSTEM_H__

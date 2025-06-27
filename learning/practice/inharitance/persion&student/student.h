#ifndef __STUDENT_H__
#define __STUDENT_H__
#include<iostream>
#include"persion.h"
#include<string>

class student : public persion{
public:
  std::string name;
  int roll;
  int class_num;

  void getstudentDetails();
  void showstudentDetails();
};
#endif

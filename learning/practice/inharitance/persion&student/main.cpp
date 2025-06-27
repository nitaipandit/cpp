#include<iostream>
#include"student.h"
#include"persion.h"

void persion::getPersionDetails(){
  std::cout<<"enter persion name:";
  std::cin>>name;
  std::cout<<"enter age:";
  std::cin>>age;
}

void persion::showPersionDetails(){
  std::cout<<"Name:"<<name<<std::endl;
  std::cout<<"AGE:"<<age<<std::endl;
}

void student::getstudentDetails(){
  std::cout<<"enter name of student:";
  std::cin>>name;
  std::cout<<"enter roll_no of student:";
  std::cin>>roll;
  std::cout<<"enter class:";
  std::cin>>class_num;
}

void showstudentDetails(){
  std::cout<<"Name:"<<name<<std::endl;
  std::cout<<"Roll_no"<<roll<<std::endl;
  std::cout<<"class"<<class_num<<std::endl;
}
int main()
{
  student s;
  s.getPersionDetails();
  s.getstudentDetails();

  std::cout <<"\n---Details---"<<std::endl;
  s.showPersionDetails();
  s.showstudentDetails();
}

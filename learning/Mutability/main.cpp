#include "Person.h"
#include <iostream>

int main() {
  Person p("Shyam", 20);
  AgeType age = p.getAge();
  //  p.updateAge();

  const Person p1("Rahul", 21);
  p1.getAge();
  p1.updateAge();

  Person &pRef = p.getPerson();
  std::cout << "Name:" << pRef.m_Name << std::endl;
  p.updateAge();
  std::cout << "Name:" << pRef.m_Name << std::endl;
  p.getPerson().m_Name = "Ravi";
  std::cout << "Name:" << pRef.m_Name << std::endl;
}
